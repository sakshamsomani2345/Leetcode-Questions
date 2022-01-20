// 215. Kth Largest Element in an Array
// Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element.
// Example 1:
// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5
// Example 2:
// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
// Output: 4
// Constraints:
// 1 <= k <= nums.length <= 104
// -104 <= nums[i] <= 104
#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int findKthLargest(vector<int> &nums, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < nums.size(); i++)
    {
        pq.push(nums[i]);
    }
    for (int i = 0; i < k - 1; i++)
    {
        pq.pop();
    }
    return pq.top();
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
    cout<<findKthLargest(x,k);
}
