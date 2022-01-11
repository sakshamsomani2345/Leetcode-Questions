// Given an integer n, return true if it is a power of four.Otherwise, return false.
// An integer n is a power of three,if there exists an integer x such that n == 4^x.
// Example 1:
// Input: n = 16
// Output: true
// Example 2:
// Input: n = 5
// Output: false
// Example 3:
// Input: n = 1
// Output: true
#include <iostream>
using namespace std;
bool isPowerOfThree(int n)
{
    if (n == 0)
    {
        return false;
    }
    if (n == 1)
    {
        return true;
    }
    if (n == 2)
    {
        return false;
    }
    if (n == 4)
    {
        return true;
    }
    if (n % 4 != 0)
    {
        return false;
    }
    if (n % 4 == 0)
    {
        bool c = isPowerOfThree(n / 4);
        if (c)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    cout << isPowerOfThree(n);
}