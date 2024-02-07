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

    // aother my approch
    
    long long int createmask(string s){
        long long mask=0;

        for(int i=0;i<s.size();i++){
            char ch=s[i];
           int temp=(1<<(ch-'a'));
           cout<<temp<<"   "<<mask<<endl;
           if(temp==mask)
                    return -1;
           if((temp & mask)==1)
                return -1;
            mask=mask|temp;
        }

        return mask;
    }
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        vector<vector<string>> ans; 
                
        for(int i=0;i<str.size();i++){
            if(str[i]=="-1")
                continue;
            long long orignalmask=createmask(str[i]);
            cout<<orignalmask<<"       "<<str[i]<<endl;
            if(orignalmask==-1){
                ans.push_back({str[i]});
                cout<<"Hi"<<endl;
                continue;
            }
            vector<string> tempans;
            tempans.push_back(str[i]);

            for(int j=i+1;j<str.size();j++){
                if(str[j]=="-1")
                    continue;
                long long tempmask=createmask(str[j]);
                if(orignalmask==tempmask){
                    tempans.push_back(str[j]);
                    str[j]="-1";
                }
            }

            ans.push_back({tempans});
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }


