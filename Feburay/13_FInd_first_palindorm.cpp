  #include<bits/stdc++.h>
using namespace std;
 string firstPalindrome(vector<string>& words) {
        string ans;

        for(auto i:words){
            string temp=i;
            reverse(temp.begin(),temp.end());
            if(i==temp)
                return i;
        }
        return ans;
    }