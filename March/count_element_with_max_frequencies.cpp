// int maxFrequencyElements(vector<int>& arr) {
//         if(arr.size()==1)
//             return 1;
//         unordered_map<int,int>mp;
//         int maxi=0;
//         for(int i=0;i<arr.size();i++){
//             mp[arr[i]]++;
//             maxi=max(maxi,mp[arr[i]]);
//         }

//         int sum=0;
        

//         priority_queue<pair<int,int>>q;
//         for(auto i:mp){
//             q.push(make_pair(i.first,i.second));
//         }
        
//         while(!q.empty()){
//            auto i=q.top();
//             q.pop();
//             if(i.second==maxi){
//                 // cout<<i.first<<"   "<<i.second<<endl;
                
//                 sum+=i.second;
//             }
//         }
// return sum;

       
//     }