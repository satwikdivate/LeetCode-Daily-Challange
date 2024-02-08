#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arr[100001];
    int solve(int n){

        if(n==0)
            return 0;
        int minicount=INT_MAX;

        if(arr[n]!=-1)
            return arr[n];

        for(int i=1;i*i<=n;i++){
            int temp=1+solve(n-i*i);
            minicount=min(minicount,temp);
        }

        return arr[n]=minicount;

    }

    int numSquares(int n) {
        
        memset(arr,-1,sizeof(arr));
        return solve(n);
        
    }
};