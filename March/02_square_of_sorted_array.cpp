#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {

    // Approch 1
        // vector<int>ans(arr.size());

        // for(int i=0;i<arr.size();i++){
        //     ans.push_back(arr[i]*arr[i]);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;

    // Approch 2
    // make square of all the arr 
        for(int i=0;i<arr.size();i++)
            arr[i]=arr[i]*arr[i];
        
        int k=arr.size()-1;

        int i=0,j=arr.size()-1;

        vector<int>res(arr.size());
        while(k>=0){

            int a=arr[i];
            int b=arr[j];

            if(a>b){
                res[k]=a;
                i++;
            }else{
               res[k]=b;
                j--;
            }
k--;
        }

        return res;
    }
};