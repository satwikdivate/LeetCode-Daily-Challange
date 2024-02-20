 #include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int>&arr) {
        
        // int n=arr.size();
        // int sum=n*(n+1)/2;

        // for(int i=0;i<arr.size();i++)
        //     sum-=arr[i];

        // return sum;
        int temp=arr.size();
         for(int i=0;i<arr.size();i++){
             temp=temp^i;
             temp=temp^arr[i];
         }
            // sum-=arr[i];

        return temp;

        // sort(arr.begin(),arr.end());
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]!=i){
        //         return  i;
        //     }
        // }
        // return arr.size();
    }