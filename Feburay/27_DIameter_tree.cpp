    // int solve(TreeNode *root,int &ans){

    //     // base condition
    //     if(root==NULL)
    //         return 0;
        
    //     // call for all cases
    //     int left=solve(root->left,ans);
    //     int right=solve(root->right,ans);

    //     // calculation
    //     int temp=max(left,right)+1;
    //     int res= max(left+right+1,temp);

    //     // store ans
    //     ans=max(ans,res);
    //     return temp;

       
    // }

    // int diameterOfBinaryTree(TreeNode* root) {
    //     int ans=0;
    //     solve(root,ans);
    //     return ans-1;
        
    // }