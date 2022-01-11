// 594. Longest Harmonious Subsequence
// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
// A subsequence of array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.
// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5
// Explanation: The longest harmonious subsequence is [3,2,2,2,3].
// Example 2:
// Input: nums = [1,2,3,4]
// Output: 2
// Example 3:
// Input: nums = [1,1,1,1]
// Output: 0
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <iterator>
#include <climits>
using namespace std;
int findLHS(vector<int> &nums)
{
   
    unordered_map<int,int> maps;
    for (int i = 0; i <nums.size(); i++)
    {
        maps[nums[i]]++;
    }
    unordered_map<int,int>::iterator it = maps.begin();
    int count = 0;
    while (it != maps.end())
    {
        int key=it->first;
        int freq=it->second;
        int curr=0;
        if(maps.count(key+1)>0){
            curr=freq+maps[key+1];
        }
        it++;
        count = max(count, curr);
    }
   
    
return count;
//anotherway
// sort(nums.begin(), nums.end());
// int i = 0;
// int j = 1;
// int result = 0;
// while (j < nums.size())
// {
//     if (nums[j] - nums[i] == 1)
//     {
//         result = max(result, j - i + 1);
//     }
//     if (nums[j] - nums[i] <= 1)
//     {
//         j++;
//     }
//     else
//     {
//         i++;
//     }
// }
// return result;
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
    cout << findLHS(x);
}