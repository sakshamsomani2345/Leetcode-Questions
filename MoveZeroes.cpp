// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non - zero elements. Note that you must do this in place without making a copy of the array.
// Example 1:
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:
// Input: nums = [0]
// Output: [0]
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            int temp = nums[i];
            nums[i] = nums[k];
            nums[k] = temp;
            k++;
        }
    }
}
int main()
{
    int n;
    vector<int> y;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        y.push_back(a);
    }
    moveZeroes(y);
    for (int i = 0; i < n; i++)
    {
        cout<<y[i]<<" ";
    }
}