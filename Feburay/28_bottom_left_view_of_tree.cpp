
// void solve(TreeNode * root,int depth,int &maxdepth,int &ans){

//     if(root==NULL)
//         return ;
    
//     solve(root->left,depth+1,maxdepth,ans);
//     if(depth>maxdepth){
//         ans=root->val;
//         maxdepth=depth;
//     }
//      solve(root->right,depth+1,maxdepth,ans);
// }
//     int findBottomLeftValue(TreeNode* root) {
//         if(root->left==NULL && root-> right==NULL)
//             return root->val;
        
//         int ans=0;
//         int maxdepth=0;
//         solve(root,0,maxdepth,ans);
//         return ans;
//     }