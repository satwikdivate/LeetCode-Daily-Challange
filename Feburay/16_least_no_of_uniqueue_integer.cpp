     #include<bits/stdc++.h>
using namespace std;
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int> store;
        for(int i=0;i<n;i++){
            store[arr[i]]++;
        }
        // creating a vector to store count of elements stored in map
        vector<int> count;
        for(auto& pair : store){
            count.push_back(pair.second);
        }
        
        //sort the vector in ascending order
        sort(count.begin(),count.end());

        /* Iterating over the map to remove elements if their
         count is less than or equal to k */
        int removed=0;
        for(int i=0;i<count.size();i++){
            if(count[i]<=k){
                k-=count[i];
                removed++;
            }
        }
        return store.size()-removed;
    }