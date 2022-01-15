// 1512. Number of Good Pairs
// Given an array of integers nums, return the number of good pairs.
// A pair (i, j) is called good if nums[i] == nums[j] and i < j.
// Example 1:
// Input: nums = [1,2,3,1,1,3]
// Output: 4
// Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.
// Example 2:
// Input: nums = [1,1,1,1]
// Output: 6
// Explanation: Each pair in the array are good.
// Example 3:
// Input: nums = [1,2,3]
// Output: 0
#include <iostream>
#include <math.h>
#include<vector>
#include<unordered_map>
#include<iterator>
#include <climits>
using namespace std;
int numIdenticalPairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j] && i < j)
            {
                count++;
            }
        }
    }
    return count;
}
////anotherappraochusing hashmap
// int numIdenticalPairs(vector<int> &nums)
// {
//    unordered_map<int,int> maps;
//    for (int i = 0; i < nums.size(); i++)
//    {
//        maps[nums[i]]++;
//    }
//    int ans=0;
//    unordered_map<int,int> ::iterator it=maps.begin();
//    while (it!=maps.end())
//    {
//        int res=it->second;
//        ans+=(res*(res-1))/2;
//        it++;

//    }
//    return ans;
   
// }
int main(){

vector<int> x;
int n;
cin >> n;
for (int i = 0; i < n; i++)
{
    int a;
    cin>>a;
    x.push_back(a);
}
cout << numIdenticalPairs(x);
}