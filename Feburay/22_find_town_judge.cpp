       #include<bits/stdc++.h>
using namespace std;
  int findJudge(int n, vector<vector<int>>& trust) {
        int count=trust.size();
        if(n==1)
            return 1;

        unordered_map<int,int>mp;
        unordered_map<int,int>occrence;
        for(int i=0;i<trust.size();i++){

            mp[trust[i][1]]++;
            occrence[trust[i][0]]++;
        }

        int ans=0;
        for(auto i:mp){
            if(i.second==n-1){

                    ans=i.first;
                    if(occrence.find(ans)!=occrence.end())
                        return -1;
                    else
                        return ans;
            }
        }
        
        //  for(int i=0;i<trust.size();i++){

        //    if(ans==trust[i][0])
        //         return -1;
        // }
        // if(ans!=0)
        //     return ans;
        return -1;
    }