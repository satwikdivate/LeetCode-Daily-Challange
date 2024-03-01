// bool isEvenOddTree(TreeNode* root) {
//         queue<TreeNode *>q;

//         q.push(root);
//         int flg=0;
//         while(!q.empty()){

//             vector<int>temp;
//             int n=q.size();

//             for(int i=0;i<n;i++){

//                 TreeNode * top=q.front();
//                 q.pop();
//                 temp.push_back(top->val);
//                 if(top->left)
//                     q.push(top->left);
                
//                 if(top->right)
//                     q.push(top->right);
//             }
//             if(temp.size()==1){
//                 cout<<"Hii"<<endl;
//                 if(flg==0 && temp[0]%2==0)
//                     return false;

//                 if(flg==1 && temp[0]%2==1)
//                     return false;
//                  flg=1-flg;
//                 continue;
//             }
//             if(flg==0){

//                 for(int i=0;i<temp.size()-1;i++){
//                     cout<<temp[i]<<"     ";
//                     if((temp[i]%2==1 && temp[i+1]%2==1) && (temp[i]<temp[i+1]))
//                         continue;
//                     else
//                         return false;

//                 }
//             }else{
//                 cout<<endl;
//                 for(int i=0;i<temp.size()-1;i++){
//                     cout<<temp[i]<<"    ";
//                     if((temp[i]%2==0 && temp[i+1]%2==0) && (temp[i]> temp[i+1]))
//                         continue;
//                     else
//                         return false;
//                 }
//             }
//     cout<<"\nFLG  "<<flg<<endl;
//           flg=1-flg;

//         }

//         return true;
//     }