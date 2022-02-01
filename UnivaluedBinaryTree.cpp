#include<bits/stdc++.h>
using namespace std;
int c = 0;
bool isUnivalTree(TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }
    if (root->left != NULL && root->val != root->left->val)
    {
        c = 1;
    }
    if (root->right != NULL && root->val != root->right->val)
    {
        c = 1;
    }
    isUnivalTree(root->left);
    isUnivalTree(root->right);
    return c == 0;
}
//other approach
// bool isUnivalTree(TreeNode *root)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     if (root->left != NULL && root->val != root->left->val)
//     {
//         return false;
//     }
//     if (root->right != NULL && root->val != root->right->val)
//     {
//         return false;
//     }
//     return isUnivalTree(root->left) && isUnivalTree(root->right);
// }
int main(){


}