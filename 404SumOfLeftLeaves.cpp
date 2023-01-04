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
int sum=0;
int sumOfLeftLeaves(binarytree<int> *root)
{
    if(root==NULL){
        return 0;
    }
    if(root->left &&root->left->left==NULL && root->left->right==NULL){
        cout<<root->data;
        sum+=root->left->data;
    }
    sumOfLeftLeaves(root->left);
    sumOfLeftLeaves(root->right);
    return sum;
}
int main()
{
    binarytree<int> *root = takeinputlevelwise();
    cout << sumOfLeftLeaves(root);
}