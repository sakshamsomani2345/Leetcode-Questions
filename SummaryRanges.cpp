// 228. Summary Ranges
// You are given a sorted unique integer array nums.
// Return the smallest sorted list of ranges that cover all the numbers in the array exactly. That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
// Each range [a,b] in the list should be output as:
// "a->b" if a != b
// "a" if a == b
// Example 1:
// Input: nums = [0,1,2,4,5,7]
// Output: ["0->2","4->5","7"]
// Explanation: The ranges are:
// [0,2] --> "0->2"
// [4,5] --> "4->5"
// [7,7] --> "7"
// Example 2:
// Input: nums = [0,2,3,4,6,8,9]
// Output: ["0","2->4","6","8->9"]
// Explanation: The ranges are:
// [0,0] --> "0"
// [2,4] --> "2->4"
// [6,6] --> "6"
// [8,9] --> "8->9"
// Constraints:
// 0 <= nums.length <= 20
// -231 <= nums[i] <= 231 - 1
// All the values of nums are unique.
// nums is sorted in ascending order.
#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> res;
    if (nums.size() == 0)
        return res;
    string s = "";
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (i < n - 1)
        {
            if (nums[i] + 1 == nums[i + 1])
            {
                if (s == "")
                    s.append(to_string(nums[i]));
            }
            else
            {
                if (s == "")
                    res.push_back(to_string(nums[i]));
                else
                {
                    s.append("->" + to_string(nums[i]));
                    res.push_back(s);
                    s = "";
                }
            }
        }
        else
        {
            if (s == "")
                res.push_back(to_string(nums[i]));
            else
            {
                s.append("->" + to_string(nums[i]));
                res.push_back(s);
            }
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int> y;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        y.push_back(a);
    }
    vector<string> x=summaryRanges(y);
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x[i]<<" ";
    }
    
}