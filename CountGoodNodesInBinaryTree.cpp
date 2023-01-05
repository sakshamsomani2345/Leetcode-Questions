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
int counts=0;
void helper(binarytree<int>* root,int parent){
    if(root==NULL){
        return;
    }
    parent=max(parent,root->data);
    if(root->data>=parent){
        counts++;
    }
    helper(root->left,parent);
    helper(root->right,parent);
}
int goodNodes(binarytree<int> *root)
{
    helper(root,INT_MIN);
    return counts;
}
int main()
{
    binarytree<int> *root = takeinputlevelwise();
    cout<<goodNodes(root);
}