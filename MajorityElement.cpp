// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:
// Input: nums = [3,2,3]
// Output: 3
// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int majorityelement(vector<int> nums)
{

// unordered_map<int, int> maps;

// for (int i = 0; i < nums.size(); i++)
// {
//     maps[nums[i]]++;
// }
// unordered_map<int, int>::iterator it = maps.begin();
// while (it!=maps.end())
// {
//     if(it->second>count){
//         max=it->first;
//         count=it->second;
//     }
//     it++;
// }

//     return max;
int max=-1;
int x=nums.size()/2;
for (int i = 0; i < nums.size(); i++)
{
    int count=0;
    for (int j = i+1; j < nums.size(); j++)
    {
        if(nums[i]==nums[j]){
        count++;
        }
    }
    if(count>x){
        return nums[i];
    }
    
}

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
   
    cout << majorityelement(nums);
}