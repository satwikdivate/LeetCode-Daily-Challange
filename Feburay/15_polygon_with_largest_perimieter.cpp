      #include<bits/stdc++.h>
using namespace std;


    long long largestPerimeter(vector<int>& arr) {
        long long sum=0;
        priority_queue<int>q;
        for(int i=0;i<arr.size();i++)   {
            q.push(arr[i]);
            sum+=arr[i];
        }

        while(q.size()>2){
            long long top=q.top();
            q.pop();
            if(sum >2*top)
                return sum;
            
            sum-=top;
        }

        return -1;
      