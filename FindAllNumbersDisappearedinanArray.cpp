// 448.Find All Numbers Disappeared in an Array
// Given an array nums of n integers where nums[i] is in the range[1, n], return an array of all the integers in the range[1, n] that do not appear in nums.
// Example 1 :
//Input : nums = [ 4, 3, 2, 7, 8, 2, 3, 1 ] Output : [ 5, 6 ] Example 2 :
//Input : nums = [ 1, 1 ] Output : [2]
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{

    ////timelimitexceeded
    //         int t=0;
    //      bool z=true;
    //      if(nums.size()==0){
    //          return 0;
    //      }
    //     for(int i = 0; i < nums.size(); i++)
    //     {
    //         bool unique=true;
    //         int y=t;

    //         for (int j = 0; j <nums.size(); j++)
    //         {
    //             if(y==nums[j]){
    //                unique=false;
    //             }
    //         }
    //         t++;
    //         if(unique){
    //             return y;
    //         }

    //     }
    //         return nums.size();
    /// optimise solution
    // vector<int> x;
    // unordered_map<int, int> maps;
    // if (nums.size() == 1)
    // {
    //     x.push_back(1);
    //     return x;
    // }
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     maps[nums[i]]++;
    // }
    // int y = 1;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (maps.count(y) > 0)
    //     {
    //         y++;
    //         continue;
    //     }
    //     else
    //     {
    //         x.push_back(y);
    //     }
    //     y++;
    // }
    // return x;
    // vector<int> x;
    // sort(nums.begin(),nums.end());
    // int j=1;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     if(j!=nums[i]){
    //     x.push_back(j);
    //     }
    //     j++;

        // }
    // return x;
    
}

int main()
{
    int n;
    vector<int> y;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        y.push_back(a);
    }
    vector<int> x = findDisappearedNumbers(y);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " ";
   }
   
}