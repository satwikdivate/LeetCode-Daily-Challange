 #include<bits/stdc++.h>
using namespace std;
 vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort( nums.begin() , nums.end()) ;
        int n = nums.size() ;
        vector<vector<int>>dp(n) ;
        
        
        dp[0].push_back(nums[0]) ;
        
        for( int i = 1 ; i < n ; i++ )
        {
            
            dp[i].push_back(nums[i]) ;
            
            for( int j = 0 ; j < i ; j++ )
            {
                if(nums[i]%nums[j]==0 && dp[i].size() < dp[j].size() + 1 )
                {
                    dp[i] = dp[j] ;
                    dp[i].push_back(nums[i]) ;
                }
            }
        }
        
        vector<int>ans ;
        
        for( int i = 0 ; i < n ; i++ )
        {
            if(dp[i].size() > ans.size())
            {
                ans = dp[i] ;
            }
        }
        
        return ans ;
        
        
    }