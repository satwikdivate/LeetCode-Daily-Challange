#include<bits/stdc++.h>
using namespace std;
 vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>>mp;

        for(auto i:str){
            string s=i;
            sort(i.begin(),i.end());
            mp[i].push_back(s);
        }
         vector<vector<string>>ans;
        for(auto i :mp){
            ans.push_back(i.second);
        }
        return ans;
    }