#include <iostream>
#include <math.h>
#include <climits>
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
int main(){
    node* temp=input();
    node *head=temp;
    int n=length(head);
    // while(head!=NULL && head->next!=NULL)
    // {
    //     if(head->next->data==3){
    //         head->next=head->next->next;
    //     }
    //     head=head->next;
        
    // }
    // print(temp);
    node *A=head;
    while (A != NULL && A->next != NULL)
    {

        if (A->next->data == 3)
        {
            A->next = A->next->next;
        }
        else
        {
            A = A->next;
        }
    }

    if (head->data== 3)
    {
        head = head->next;
    }
    print(head);
}