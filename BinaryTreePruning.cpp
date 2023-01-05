#include <bits/stdc++.h>
using namespace std;
template <typename T>

class binarytree
{
public:
    T data;
    binarytree<T> *left;
    binarytree<T> *right;
    binarytree(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
binarytree<int> *takeinputlevelwise()
{
    int data;
    cin >> data;
    queue<binarytree<int> *> pq;
    binarytree<int> *root = new binarytree<int>(data);
    pq.push(root);
    while (!pq.empty())
    {
        binarytree<int> *x = pq.front();
        pq.pop();
        cout << "enter leftdata of " << x->data;
        int leftdata;
        cin >> leftdata;
        if (leftdata != -1)
        {
            binarytree<int> *leftnode = new binarytree<int>(leftdata);
            x->left = leftnode;
            pq.push(leftnode);
        }
        cout << "enter rightdata of " << x->data;
        int rightdata;
        cin >> rightdata;
        if (rightdata != -1)
        {
            binarytree<int> *rightnode = new binarytree<int>(rightdata);
            x->right = rightnode;
            pq.push(rightnode);
        }
    }
    return root;
}
void helper(binarytree<int> *root,int &count){
    if(root==NULL){
        return;
    }
    if(root->data==1){
        count=1;
    }
    helper(root->left,count);
    helper(root->right,count);
}
void print(binarytree<int> *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data;
    print(root->left);
    print(root->right);
}
binarytree<int> *pruneTree(binarytree<int> *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    int count=0;
     helper(root->left,count);
     if(count==0){
        root->left=NULL;
     }
     count=0;
     helper(root->right,count);
      if(count==0){
        root->right=NULL;
     }
     pruneTree(root->left);
     pruneTree(root->right);
     return root;
}

void printlevelwise(binarytree<int> *root)
{

    queue<binarytree<int> *> pq;
    pq.push(root);
    while (!pq.empty())
    {
        binarytree<int> *x = pq.front();
        cout << x->data << ":";
        pq.pop();
        if (x->left)
        {
            cout << "L" << x->left->data;
            pq.push(x->left);
        }
        if (x->right)
        {
            cout << "R" << x->right->data;
            pq.push(x->right);
        }
        cout << endl;
    }
}
//optimsed sol
// TreeNode* pruneTree(TreeNode* root) {
//        if(root!=NULL){
//             root->left = pruneTree(root->left);
//             root->right = pruneTree(root->right);
//             if(!root->left && !root->right && root->val==0)
//                 return NULL;
//         }
//         return root;
   
//     }
int main()
{
    binarytree<int> *root = takeinputlevelwise();
     binarytree<int> *root1 =pruneTree(root);
     print(root1);

}