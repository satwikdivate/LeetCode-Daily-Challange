 #include<bits/stdc++.h>
using namespace std;
 vector<int> sequentialDigits(int low, int high) {
        
        queue<int>q;

        for(int i=1;i<=8;i++)
            q.push(i);
        
        vector<int>arr;

        while(!q.empty()){
            int top=q.front();
            q.pop();

            // we got answer so push into array
            if(top>=low && top<=high){
                arr.push_back(top);
            }

            // find lst dight
            int last=top%10;
            if(last+1<=9){
                q.push(top*10+(last+1));
            }
        }

        return arr;
    }