// 2089. Find Target Indices After Sorting Array
// You are given a 0-indexed integer array nums and a target element target.
// A target index is an index i such that nums[i] == target.
// Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. The returned list must be sorted in increasing order.
// Example 1:
// Input: nums = [1,2,5,2,3], target = 2
// Output: [1,2]
// Explanation: After sorting, nums is [1,2,2,3,5].
// The indices where nums[i] == 2 are 1 and 2.
// Example 2:
// Input: nums = [1,2,5,2,3], target = 3
// Output: [3]
// Explanation: After sorting, nums is [1,2,2,3,5].
// The index where nums[i] == 3 is 3.
// Example 3:
// Input: nums = [1,2,5,2,3], target = 5
// Output: [4]
// Explanation: After sorting, nums is [1,2,2,3,5].
// The index where nums[i] == 5 is 4.
#include<bits/stdc++.h>
using namespace std;
vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(),nums.end());
    vector<int> x;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i]==target){
            x.push_back(i);
        }
    }
    return x;
}
int main(){
    int n;
    cin>>n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int a ;
        cin>>a;
        x.push_back(a);
    }
    int t;
    cin>>t;
    vector<int> y=targetIndices(x,t);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
    
}