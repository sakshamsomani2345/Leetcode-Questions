class FindElements {
public:
TreeNode* root;
void dfs(TreeNode* root){
    if(root==NULL){
        return;
    }
    if(root->val==-1){
root->val=0;
        }
        if(root->left!=NULL){
            root->left->val=2*root->val+1;
        } 
          if(root->right!=NULL){
            root->right->val=2*root->val+2;
        }   
        dfs(root->left);
        dfs(root->right);

}
    FindElements(TreeNode* root) {
      this->root=root;
        dfs(root);
    }
    bool findval(TreeNode* root,int target){
        if(root==NULL){
            return false;
        }
        if(root->val==target){
            return true;
        }
        int x=findval(root->left,target);
        if(x){
            return true;
        }
        int y=findval(root->right,target);
        if(y){
            return true;
        }
return false;
    }
    bool find(int target) {
        return findval(root,target);
    }