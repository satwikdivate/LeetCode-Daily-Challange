 #include<bits/stdc++.h>
 using namespace std;
 int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

     unordered_map<int,list<pair<int,int>>>mp;
        // prepare adjcency list
        for(int i=0;i<flights.size();i++){

            mp[flights[i][0]].push_back(make_pair(flights[i][1],flights[i][2]));
        }

        queue<pair<int,pair<int,int>>>q;

        vector<bool>visited(n,false);
        q.push(make_pair(0,make_pair(src,0)));
        vector<int>distance(n,INT_MAX);
        while(!q.empty()){
            
            auto top=q.front();
            q.pop();
            int predistance=top.second.second;
            int node=top.second.first;
            int currweight=top.second.second;
            int stop=top.first;
            for(auto i:mp[node]){

                if(stop<=k && predistance+i.second < distance[i.first]){
                        distance[i.first]=predistance+i.second ;
                        q.push({top.first+1,{i.first,distance[i.first]}});

                }
            }
           
        }
    if(distance[dst]==INT_MAX)
        return -1;
    
        return distance[dst];
   
    }