#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0;i<t.size();i++)   
            mp[t[i]]++;

        
        int count=mp.size();
        int start=0;
        int i=0,j=0;
        int minLength=INT_MAX;

        while(j<s.size())
        {

            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;

                if(mp[s[j]]==0)
                    count--;
            }

            if(count==0){

                while(count ==0){

                    if(mp.find(s[i])!=mp.end()){
                            mp[s[i]]++;
                            if(mp[s[i]]>0){
                                count++;
                            // calacuting length
                                if(j-i+1<minLength){
                                    minLength=j-i+1;
                                    start=i;
                                }

                            }
                            
                        
                    }
                        i++;
                }
            }
            j++;
        }

        if(minLength==INT_MAX)
            return "";
        return s.substr(start,minLength);
    }
   
};