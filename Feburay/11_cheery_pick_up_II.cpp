 #include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int n,m;
    vector<vector<vector<int>>> mem;
    int f(int row,int col1,int col2,vector<vector<int>> & grid){
        if(row==n-1) return 0;
        if(mem[row][col1][col2]!=-1) return mem[row][col1][col2] ;
        int ans =0;
        for(int i=-1;i<2;i++){
            for(int j=-1;j<2;j++){
                int nc1 = col1+i, nc2 = col2+j;
                if(nc1>=0 && nc2>=0 && nc1<m && nc2<m){
                    int temp = grid[1+row][nc1]+grid[1+row][nc2] +f(row+1,nc1,nc2,grid);
                    if(nc1==nc2) temp -= grid[row+1][nc1];
                    ans = max(ans,  temp);
                }
            }
        }
        return mem[row][col1][col2] = ans;
    }

    int cherryPickup(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        mem.resize(n,vector<vector<int>>(m,vector<int>(m,-1)));
        return grid[0][0] + grid[0][m-1]+ f(0,0,m-1,grid);
    }

};