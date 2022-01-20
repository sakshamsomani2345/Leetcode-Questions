// 226. Invert Binary Tree
// Given the root of a binary tree, invert the tree, and return its root.
// Example 1:
// Input: root = [4,2,7,1,3,6,9]
// Output: [4,7,2,9,6,3,1]
// Example 2:
// Input: root = [2,1,3]
// Output: [2,3,1]
// Example 3:
// Input: root = []
// Output: []
#include<iostream>
#include<bits/stdc++.h>
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
node<int> *invertTree(node<int> *root)
{
    if (root == NULL)
    {
        return root;
    }
    node<int> *temp = root->right;
    root->right = root->left;
    root->left = temp;

    invertTree(root->left);
    invertTree(root->right);
    return root;
}
int main(){
node<int>* root=takeinputlevelwise();
node<int>* newroot=invertTree(root);
print(newroot);
}