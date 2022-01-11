// Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
// Example 1:
// Input: nums = [1,2,3,1], k = 3
// Output: true
// Example 2:
// Input: nums = [1,0,1,1], k = 1
// Output: true
// Example 3:
// Input: nums = [1,2,3,1,2,3], k = 2
// Output: false
#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_map>
#include <iterator>
 using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     for (int j = i+1; j < nums.size(); j++)
    //     {
    //         if (nums[i] == nums[j])
    //         {
    //             if (abs(i - j) <= k)
    //             {
    //                 return true;
    //             }
    //         };
    //     }
    // };

    // return false;
    //otherway
    unordered_map<int, int> maps;

    for (int i = 0; i < nums.size(); i++)
    {
if(maps.count(nums[i])>0){
    if(abs(i-maps[nums[i]])<=k){
return true;
    }
}
        maps[nums[i]]=i;
    }
    return false;
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    int k;
    cin>>k;
    cout << containsNearbyDuplicate(nums,k);
}