// 485. Max Consecutive Ones 
// Given a binary array nums, return the maximum number of consecutive 1's in the array.
// Example 1:
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:
// Input: nums = [1,0,1,1,0,1]
// Output: 2
// Constraints:
// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.
#include <iostream>
#include <unordered_map>
#include <iterator>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    // if (nums.size() == 1 && nums[0] == 1)
    // {
    //     return 1;
    // }
    // if (nums.size() == 1 && nums[0] != 1)
    // {
    //     return 0;
    // }
    // int count = 0;
    // int max = -1;
    // for (int i = 0; i < nums.size(); i++)
    // {
        
    //      if (nums[i] == 1)
    //     {
    //         count++;
    //     }
    //     if (i==nums.size()-1)
    //     {
    //         if(nums[i]==1){
    //             if (max < count)
    //             {
    //                 max = count;
    //             }
    //         }
          
    //     }
    //     if(nums[i]!=1)
    //     {
    //         if (max < count)
    //         {
    //             max = count;
    //         }
    //         count = 0;
    //     }
    // }
    // return max;
    //////other optimise solution
    int c=0;
    int maximum=0;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==1){
            c++;
        }else{
            c=0;
        }
        maximum=max(c,maximum);

    }
    return maximum;
    
}
int main()
{
    int m;
    vector<int> x;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    cout << findMaxConsecutiveOnes(x);
}