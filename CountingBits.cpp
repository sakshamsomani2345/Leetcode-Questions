// 338. Counting Bits
// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
// Example 1:
// Input: n = 2
// Output: [0,1,1]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// Example 2:
// Input: n = 5
// Output: [0,1,1,2,1,2]
// Explanation:
// 0 --> 0
// 1 --> 1
// 2 --> 10
// 3 --> 11
// 4 --> 100
// 5 --> 101
// Constraints:
// 0 <= n <= 105
#include<iostream>
#include<vector>
using namespace std;
vector<int> countBits(int n)
{
    vector<int> x(n + 1);

    int *res = new int[n + 1];
    for (int i = 0; i <= n; i++)
    {
        x[i] = x[i / 2] + i % 2;
    }
    return x;
}
int main(){
    int n;
    cin>>n;
vector<int> x=countBits(n);
for (int i = 0; i < x.size(); i++)
{
    cout<<x[i]<<" ";
}

}