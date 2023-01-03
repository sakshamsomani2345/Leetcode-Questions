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
int x = 0;
pair<int, int> averageOfSubtree(binarytree<int> *root)
{
    if (root == NULL)
    {
        pair<int, int> p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    pair<int, int> leftans = averageOfSubtree(root->left);
    pair<int, int> rightans = averageOfSubtree(root->right);
    int sum = leftans.second + rightans.second + root->data;
    int count = leftans.first + rightans.first + 1;
    if (sum / count == root->data)
    {
        x++;
    }
    pair<int, int> p;
    p.second = sum;
    p.first = count;
    return p;
}
//other solution
 int count=0;
// int countnodes(binarytree<int>* root)
// {
// if(root==NULL)
// return 0;
// else{
// return countnodes(root->left)+countnodes(root->right)+1;
// }
// }
// int findSum(binarytree<int>* root)
// {
// if(root==NULL)
// return 0;
// return findSum(root->left)+findSum(root->right)+root->val;
// }
// int averageOfSubtree(binarytree<int>* root) {
// if(root==NULL)
// return 0;
// if((findSum(root)/countnodes(root))==root->val)
// count++;
// averageOfSubtree(root->left);
// averageOfSubtree(root->right);

//  return count;
     
      
//  }
int main()
{
    binarytree<int> *root = takeinputlevelwise();
    averageOfSubtree(root);
    cout << x;
}