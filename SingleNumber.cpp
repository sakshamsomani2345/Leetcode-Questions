// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example 1:
// Input: nums = [2,2,1]
// Output: 1
// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4
// Example 3:
// Input: nums = [1]
// Output: 1
#include <iostream>
#include <climits>
#include<iterator>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<int,int> maps;
    for (int i = 0; i < n; i++)
    {
        maps[arr[i]]++;
    }

    unordered_map<int, int>::iterator it = maps.begin();
    while (it != maps.end())
    {
        if(it->second==1){
            cout<<it->first;
            
        }it++;
        
    }
}