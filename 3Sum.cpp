// 15. 3Sum
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
// Notice that the solution set must not contain duplicate triplets.
// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Example 2:
// Input: nums = []
// Output: []
// Example 3:
// Input: nums = [0]
// Output: []
// Constraints:
// 0 <= nums.length <= 3000
// -105 <= nums[i] <= 105
#include <bits/stdc++.h>
using namespace std;
/// this approach is right but gives tle
// vector<vector<int>> threeSum(vector<int>& nums) {
//            int count=0;
//         // vector<vector<int>> y;
//          set<vector<int>> y;
// 	for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             for (int k = j+1; k  <nums.size(); k++)
//             {

//                 if (nums[i] + nums[j] +nums[k]== 0)
//                 {

//                     vector<int> s;
//                     s.push_back(nums[i]);
//                     s.push_back(nums[j]);
//                     s.push_back(nums[k]);
//                     sort(s.begin(),s.end());

//                     y.insert(s);

//                 }
//             }

//         }
//     }
//           vector<vector<int>> an(y.begin(),y.end());
//         return an;
//                 // return y;

//     }
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();

    if (n < 3)
        return {};

    if (n == 0 && nums[0] != 0)
        return {};
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i == 0 || (i > 0 && nums[i] != nums[i - 1]))
        {
            int low = i + 1;
            int high = nums.size() - 1;
            int sum = 0 - nums[i];
            while (low < high)
            {
                if (nums[low] + nums[high] == sum)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    res.push_back(temp);
                    while (low < high && nums[low] == nums[low + 1])
                    {
                        low++;
                    }
                    while (low < high && nums[high] == nums[high - 1])
                    {
                        high--;
                    }
                    low++;
                    high--;
                }
                else if (nums[low] + nums[high] < sum)
                {
                    low++;
                }
                else
                {
                    high--;
                }
            }
        }
    }
    return res;
}
int main()
{
}