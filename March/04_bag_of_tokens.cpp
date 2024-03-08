 #include<bits/stdc++.h>
 using namespace std;
 
 int bagOfTokensScore(vector<int>& arr, int power) {

        sort(arr.begin(),arr.end());
        
        if(arr.size()==1 && arr[0]<power)
            return 1;
        else if(arr.size()==1 && arr[0]>power)
            return 0;
        if(arr.size()==0)
            return 0;

        if(arr[0]>power)
            return 0;

        int i=0,j=arr.size()-1;
        int count=0;
        int ans=0;
        while(i<=j){

            if(arr[i]<=power){
                count++;
                power=power-arr[i];
                ans=max(ans,count);
                i++;
            }else if(count>=1){
                count--;
                power=power+arr[j];
                j--;
            }else
                return ans;
        }
        return ans;
    }