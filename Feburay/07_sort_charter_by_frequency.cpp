#include<bits/stdc++.h>
using namespace std;
string frequencySort(string s) {
        map<char,int>mp;

        for(int i=0;i<s.size();i++)
            mp[s[i]]++;
        
        priority_queue<pair<int,char>>q;

        for(auto i:mp){
            q.push(make_pair(i.second,i.first));
        }

        string ans;
        while(!q.empty()){

            auto top=q.top();
            q.pop();
            for(int i=0;i<top.first;i++)
                ans.push_back(top.second);
        }

        return ans;
    }