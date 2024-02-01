#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> divideArray(vector<int>&arr, int k) {

        vector<vector<int>>ans;
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++){

            if((arr[i+2]-arr[i])<=k){
            ans.push_back({arr[i],arr[i+1],arr[i+2]});
            i+=2;
            }else
                return {};

        }
        // if(ans.size()!=arr.size()/3)
        //     return {};
        return ans;
    }