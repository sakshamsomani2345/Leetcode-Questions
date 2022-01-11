// 414. Third Maximum Number
// Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
// Example 1:
// Input: nums = [3,2,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2.
// The third distinct maximum is 1.
// Example 2:
// Input: nums = [1,2]
// Output: 2
// Explanation:
// The first distinct maximum is 2.
// The second distinct maximum is 1.
// The third distinct maximum does not exist, so the maximum (2) is returned instead.
// Example 3:
// Input: nums = [2,2,3,1]
// Output: 1
// Explanation:
// The first distinct maximum is 3.
// The second distinct maximum is 2 (both 2's are counted together since they have the same value).
// The third distinct maximum is 1.
#include<iostream>
#include<vector>
#include<climits>
    using namespace std;
int thirdMax(vector<int> &nums)
{
//tried this method but not got an answer
//  int n1=INT_MIN;
//  int n2=INT_MIN;
//  int n3=INT_MIN;
//  for (int i = 0; i < nums.size(); i++)
//  {
//      if(n1<nums[i]){
//          n1=nums[i];
//      }
//  }
//  for (int i = 0; i < nums.size(); i++)
//  {
//      if(n2<nums[i] && nums[i]!=n1){
//          n2=nums[i];
//      }
//  }
//  for (int i = 0; i < nums.size(); i++)
//  {
//      if(n3<nums[i] && n2!=nums[i] && n1!=nums[i]){
//          n3=nums[i];
//      }
//  }
//  return n3;
int i = 0;
if (nums.size() == 2)
{
    return max(nums[i], nums[i + 1]);
}
map<int, bool> mp;
for (auto i : nums)
    mp[i] = true;
nums = {};
for (auto i : mp)
    nums.push_back(i.first);
int n = nums.size();
return (n < 3) ? nums[n - 1] : nums[n - 3];
}
int main(){
    int m;
    vector<int> x;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
     cout<<thirdMax(x);
}