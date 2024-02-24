#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    typedef pair<int,int>p;
  
    void dfs(int node,unordered_map<int,list<pair<int,int>>>&mp,vector<int>&visited,int weight){

       
     for(auto i:mp[node]){

                int nextPerson=i.first;
                int nextTime=i.second;

                 if(weight<=nextTime && visited[nextPerson]>nextTime  ){
                    visited[nextPerson]=nextTime;
                    cout<<visited[nextPerson]<<"           "<<1<<endl;
                    // q.push(make_pair(nextPerson,nextTime));
                    dfs(nextPerson,mp,visited,nextTime);
                }
     }

        
    }

    vector<int> findAllPeople(int n, vector<vector<int>>& meet, int firstPerson) {
        

        unordered_map<int,list<pair<int,int>>>mp;
  
        for(int i=0;i<meet.size();i++){
            int first=meet[i][0];
            int second=meet[i][1];
            int weight=meet[i][2];
               
            mp[first].push_back(make_pair(second,weight));
            mp[second].push_back(make_pair(first,weight));

        }

    // // bfs

        queue<p>q;
        // first 0 and firstPerson knows at 0 time
        q.push({0,0});
        q.push({firstPerson,0});

        vector<int>timeT(n,INT_MAX);
        timeT[0]=0;
        timeT[firstPerson]=0;

        while(!q.empty()){

            auto top=q.front();
            int person=top.first;
            int time=top.second;
            cout<<person<<"   "<<time<<endl;
            q.pop();

            for(auto i:mp[person]){

                int nextPerson=i.first;
                int nextTime=i.second;

                if(time<=nextTime && timeT[nextPerson]>nextTime  ){
                    timeT[nextPerson]=nextTime;
                    q.push(make_pair(nextPerson,nextTime));
                }

            }
        }

    vector<int>ans;
    for(int i=0;i<timeT.size();i++){
        if(timeT[i]!=INT_MAX)
            ans.push_back(i);
    }

    

    return ans;
    // dfs
        // vector<int>visited(n,INT_MAX);

        // dfs(0,mp,visited,0);
        // dfs(firstPerson,mp,visited,0);
       
        
        // vector<int>res;
        // res.push_back(0);
        // for(int i=1;i<visited.size();i++){
        //     cout<<visited[i]<<endl;
        //     if(visited[i]!=INT_MAX)
        //         res.push_back(i);
        // }
        //     // s.insert(a);

        // return res;

    }
};