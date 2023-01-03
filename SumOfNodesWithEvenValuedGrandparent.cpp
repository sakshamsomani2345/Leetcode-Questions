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
int sumEvenGrandparent(binarytree<int> *root)
{
    queue<binarytree<int> *> pq;
    pq.push(root);
    int sum = 0;
    while (!pq.empty())
    {
        binarytree<int> *x = pq.front();
        pq.pop();
        if (x->data % 2 == 0)
        {
            if (x->left != NULL && x->left->left != NULL)
            {
                sum += x->left->left->data;
            }
            if (x->left != NULL && x->left->right != NULL)
            {
                sum += x->left->right->data;
            }
            if (x->right != NULL && x->right->right != NULL)
            {
                sum += x->right->right->data;
            }
            if (x->right != NULL && x->right->left != NULL)
            {
                sum += x->right->left->data;
            }
        }
        if(x->left!=NULL){
            pq.push(x->left);
        }
        if(x->right!=NULL){
            pq.push(x->right);
        }
    }
    return sum;
}
int main()
{
    binarytree<int> *root = takeinputlevelwise();
    cout << sumEvenGrandparent(root);
}