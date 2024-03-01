 #include<bits/stdc++.h>
 using namespace std;
  string maximumOddBinaryNumber(string s) {
  // Approch 1

        // sort(s.begin(),s.end());

        // int i=0;
        // int j=s.size()-2;

        // while(i<j){

        //     if(s[i]=='0' && s[j]=='1'){
        //         swap(s[i],s[j]);
        //     }
        //     i++;
        //     j--;
        // }

        // return s;

        // Approch 2
       string ans;
        for(int i=0;i<s.size();i++)
            ans.push_back('0');
        
        int onecount=count(s.begin(),s.end(),'1');
        int n=s.size()-1;
        ans[n]='1';
        onecount--;

        for(int i=0;i<onecount;i++)
            ans[i]='1';
        return ans;

    }