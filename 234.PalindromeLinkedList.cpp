#include <iostream>
using namespace std;
bool palindrome(ListNode *head, stack<int> s)
{
    while (!s.empty())
    {

        if (head->val != s.top())
        {
            return false;
        }
        s.pop();
        head = head->next;
    }
    return true;
}
bool isPalindrome(ListNode *head)
{
    ListNode *temp = head;
    stack<int> s;
    while (temp != NULL)
    {
        s.push(temp->val);
        temp = temp->next;
    }
    return palindrome(head, s);
}
int main()
{
    int n;
    cin >> n;
    cout << isPalindrome();
}