// 19. Remove Nth Node From End of List
// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:
// Input: head = [1], n = 1
// Output: []
// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next = NULL;
    node(int data)
    {
        this->data = data;
    }
};

node *input()
{
    int n;
    cout << "Enter length of Linked List" << endl;
    cin >> n;
    node *head = NULL;
    node *temp = NULL;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = temp->next;
        }
    }
    return head;
}
void print(node *head)
{
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int length(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}
node *removeNthFromEnd(node *head, int n)
{
    if(n==0){
        return head;
    }
    int l=length(head)-n;
    if (l == 0){
        return head->next;
    }

        int i = 0;
    node *temp=head;
    while (i<l-1)
    {
        temp=temp->next;
        i++;
    }
  
        temp->next = temp->next->next;
    return head;
    

}
int main(){
    node * head=input();
    int n;
    cin>>n;
    node*head1=removeNthFromEnd(head,n);
    print(head1);
}