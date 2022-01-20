// 111. Minimum Depth of Binary Tree
// Given a binary tree, find its minimum depth.
// The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
// Note: A leaf is a node with no children.
// Example 1:
// Input: root = [3,9,20,null,null,15,7]
// Output: 2
// Example 2:
// Input: root = [2,null,3,null,4,null,5,null,6]
// Output: 5
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
#include <queue>
using namespace std;
template <typename T>
class node
{
public:
    T data;
    node *right;
    node *left;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void print(node<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << ":";
    if (root->left != NULL)
    {
        cout << "L" << root->left->data << ",";
    }
    if (root->right != NULL)
    {
        cout << "R" << root->right->data;
    }
    cout << endl;
    print(root->left);
    print(root->right);
}
node<int> *input()
{
    cout << "Enter Root Data " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    node<int> *root = new node<int>(data);
    node<int> *leftnode = input();
    node<int> *rightnode = input();
    root->left = leftnode;
    root->right = rightnode;

    return root;
}
node<int> *takeinputlevelwise()
{
    cout << "Enter Root Data " << endl;
    int data;
    cin >> data;
    node<int> *root = new node<int>(data);
    queue<node<int> *> pq;
    pq.push(root);
    while (!pq.empty())
    {
        node<int> *top = pq.front();
        pq.pop();
        cout << "enter left child of " << top->data << endl;
        int data1;
        cin >> data1;
        if (data1 != -1)
        {
            node<int> *leftnode = new node<int>(data1);
            top->left = leftnode;
            pq.push(leftnode);
        }
        cout << "enter right child of " << top->data << endl;
        int data2;
        cin >> data2;
        if (data2 != -1)
        {
            node<int> *rightnode = new node<int>(data2);
            top->right = rightnode;
            pq.push(rightnode);
        }
    }
    return root;
}
int minDepth(node<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    if (root->left != nullptr && root->right != nullptr)
    {
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
    return 1 + max(minDepth(root->left), minDepth(root->right));
}
int main()
{
    node<int>* root=takeinputlevelwise();
    cout<<minDepth(root);
}