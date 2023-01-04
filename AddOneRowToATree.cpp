oid helper(TreeNode* root,int val,int depth,int target){
    if(root==NULL){
        return;
    }
   
    if((depth-1)==target){
     TreeNode* newnode=new TreeNode(val);
        newnode->right=root->right;
        root->right=newnode;
    newnode=new TreeNode(val);
        newnode->left=root->left;
        root->left=newnode;
    return;
    }
    
    helper(root->left,val,depth,target+1);
    helper(root->right,val,depth,target+1);

}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
          if(depth == 1){
            TreeNode* temp = new TreeNode(val);
            temp->left = root;
            return temp;
        }
        helper(root,val,depth,1);
        return root;
    }