// 1389. Create Target Array in the Given Order
// Given two arrays of integers nums and index. Your task is to create target array under the following rules:
// Initially target array is empty.
// From left to right read nums[i] and index[i], insert at index index[i] the value nums[i] in target array.
// Repeat the previous step until there are no elements to read in nums and index.
// Return the target array.
// It is guaranteed that the insertion operations will be valid.
// Example 1:
// Input: nums = [0,1,2,3,4], index = [0,1,2,2,1]
// Output: [0,4,1,3,2]
// Explanation:
// nums       index     target
// 0            0        [0]
// 1            1        [0,1]
// 2            2        [0,1,2]
// 3            2        [0,1,3,2]
// 4            1        [0,4,1,3,2]
// Example 2:
// Input: nums = [1,2,3,4,0], index = [0,1,2,3,0]
// Output: [0,1,2,3,4]
// Explanation:
// nums       index     target
// 1            0        [1]
// 2            1        [1,2]
// 3            2        [1,2,3]
// 4            3        [1,2,3,4]
// 0            0        [0,1,2,3,4]
// Example 3:
// Input: nums = [1], index = [0]
// Output: [1]
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> ans;
    if (nums.size() != index.size())
        return {};
    for (int i = 0; i < nums.size(); i++)
    {
        ans.insert(ans.begin() + index[i], nums[i]);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        y.push_back(a);
    }
    vector<int> y=createTargetArray(x,y);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
}