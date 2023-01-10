 bool issame(TreeNode* p, TreeNode* q) {
     if(p==NULL && q==NULL){
         return true;
     }
     if(p==NULL || q==NULL){
         return false;
     }
     if(p->val!=q->val){
         return false;
     }
     return (issame(p->left,q->left) &&
     issame(p->right,q->right));

 }