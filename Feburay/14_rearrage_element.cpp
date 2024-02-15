
  #include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& arr) {
        vector<int>ans(arr.size(),0);

        int pindex=0,nindex=1;

        for(int i=0;i<arr.size();i++){

            if(arr[i]>=0){
                ans[pindex]=arr[i];
                pindex+=2;
            }
            if(arr[i]<0){
                ans[nindex]=arr[i];
                nindex+=2;
            }
        }
        return ans;
    }