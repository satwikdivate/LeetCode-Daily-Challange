 #include<bits/stdc++.h>
 using namespace std;
class Disjointset{
    vector<int> rank,size,parent;

    public:
        Disjointset(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1);
            for(int i=0;i<=n;i++){
                parent[i] = i;
                size[i] = 1;
            }
        }

        int findupar(int node){
            if(node == parent[node]) return node;
            return parent[node] = findupar(parent[node]);
        }

        void unionbyrank(int u,int v){
            int ulp_u = findupar(u);
            int ulp_v = findupar(v);

            if(ulp_u == ulp_v) return ;
            if(rank[ulp_u] < rank[ulp_v]) parent[ulp_u] = ulp_v;
            else if(rank[ulp_v] < rank[ulp_u]) parent[ulp_v] = ulp_u;
            else{
                parent[ulp_v] = ulp_u;
                rank[ulp_u]++;
            }
        }

        void unionbysize(int u,int v){
            int ulp_u = findupar(u);
            int ulp_v = findupar(v);

            if(ulp_u == ulp_v) return ;
            if(size[ulp_u] < size[ulp_v]){
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
            else{
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
        }

        void reset(int x) {
            parent[x] = x;
            size[x]=1;
        }
};

class Solution {
public:

    bool canTraverseAllPairs(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return true;
        int maxi = 0;
        for(auto a:nums){
            maxi = max(a,maxi);
            if(a==1) return false;
        }
        Disjointset ds(maxi);
        for(int i=0;i<n;i++){
            vector<int> temp;
            int val = nums[i];
            if(nums[i]%2==0){
                temp.push_back(2);
                ds.unionbysize(nums[i],2);
            } 
            while (val % 2 == 0) {
                val /= 2;
            }
            for (int j = 3; j * j <= val; j += 2) {
                if(val%j==0){
                    ds.unionbysize(nums[i],j);
                    temp.push_back(j);
                } 
                while (val % j == 0) {
                    val /= j;
                }
            }
            if (val > 2) {
                temp.push_back(val);
            }
            int si = temp.size();
            for(int x =0;x<si-1;x++){
                for(int y=x+1;y<si;y++){
                    ds.unionbysize(temp[x],temp[y]);
                }
            }
        }

        int val = ds.findupar(nums[0]);
        for(int i=1;i<n;i++){
            if(ds.findupar(nums[i]) != val) return false;
        }
        return true;

    }
};