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
void swap(binarytree<int>* A, binarytree<int>* B)
{
    int tmp = A->data;
    A->data = B->data;
    B->data = tmp;
}
    
void reverse_node(vector<binarytree<int>*> &arr)
{
    int i = 0, j = arr.size()-1;

    while(i <= j) swap(arr[i++], arr[j--]);        
}

    binarytree<int>* reverseOddLevels(binarytree<int>* root) {
        
        
        queue<binarytree<int>*>q;
        q.push(root);
        int cnt = -1;

        while(!q.empty())
        {
          int n = q.size();
          vector<binarytree<int>*>l;


          for(int i = 0; i < n; ++i)
          {
            
            auto temp = q.front();
            q.pop();

            if(temp->left!=NULL) q.push(temp->left);
            if(temp->left!=NULL) q.push(temp->right);

            l.push_back(temp);

          }
          cnt++;
         
          if(cnt%2!=0) reverse_node(l);

        }

        return root;
    }
//     void preorder(struct Node *root1, struct Node*
//                                root2, int lvl)
// {
//     // Base cases
//     if (root1 == NULL || root2==NULL)
//         return;
 
//     // Swap subtrees if level is even
//     if (lvl%2 == 0)
//         swap(root1->key, root2->key);
 
//     // Recur for left and right
//     // subtrees (Note : left of root1
//     // is passed and right of root2 in
//     // first call and opposite
//     // in second call.
//     preorder(root1->left, root2->right, lvl+1);
//     preorder(root1->right, root2->left, lvl+1);
// }
 
// // This function calls preorder()
// // for left and right children
// // of root
// void reverseAlternate(struct Node *root)
// {
//    preorder(root->left, root->right, 0);
// }
// void printlevelwise(binarytree<int> *root)
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
int main()
{
    binarytree<int> *root = takeinputlevelwise();
     binarytree<int> *root1 =reverseOddLevels(root);
    printlevelwise(root1);
}