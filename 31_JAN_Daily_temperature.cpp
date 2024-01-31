 #include<bits/stdc++.h>
 using namespace std;
 vector<int> dailyTemperatures(vector<int>& arr) {
        stack<pair<int,int>>st;
        vector<int>ans(arr.size(),0);
        for(int i=arr.size()-1;i>=0;i--){

            if(st.empty()){
               ans[i]=0;
            }else if(st.top().first>arr[i]){
                ans[i]=st.top().second-i;
            }else {

                while(!st.empty() && st.top().first <=arr[i])
                    st.pop();
                
                if(st.empty())
                    ans[i]=0;
                else
                    ans[i]=st.top().second-i;
                    
            }
            st.push({arr[i],i});
        }
        return ans;
    }