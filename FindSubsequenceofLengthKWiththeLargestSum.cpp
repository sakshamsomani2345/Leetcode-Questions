// You are given an integer array nums and an integer k. You want to find a subsequence of nums of length k that has the largest sum.
// Return any such subsequence as an integer array of length k.
// A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.
// Example 1:
// Input: nums = [2,1,3,3], k = 2
// Output: [3,3]
// Explanation:
// The subsequence has the largest sum of 3 + 3 = 6.
// Example 2:
// Input: nums = [-1,-2,3,4], k = 3
// Output: [-1,3,4]
// Explanation: 
// The subsequence has the largest sum of -1 + 3 + 4 = 6.
// Example 3:
// Input: nums = [3,4,3,3], k = 2
// Output: [3,4]
// Explanation:
// The subsequence has the largest sum of 3 + 4 = 7. 
// Another possible subsequence is [4, 3].
#include<iostream>
#include<queue>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> maxSubsequence(vector<int> &nums, int k)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int n = nums.size();
    int i;
    for (i = 0; i < n; i++)
    {
        pq.push({nums[i], i});
        if (pq.size() > k)
            pq.pop();
    }
    vector<pair<int, int>> ans;
    while (!pq.empty())
    {
        auto x = pq.top();
        pq.pop();
        ans.push_back({x.second, x.first});
    }
    sort(ans.begin(), ans.end());
    vector<int> res;
    for (auto i : ans)
        res.push_back(i.second);

    return res;
}
int main(){
int n;
cin>>n;
vector<int> x;
for (int i = 0; i < n; i++)
{
    int a;
    cin>>a;
   x.push_back(a); 
}
int k;
cin>>k;
vector<int> y=maxSubsequence(x,k);
for (int i = 0; i < y.size(); i++)
{
    cout<<y[i]<<" ";
}

}