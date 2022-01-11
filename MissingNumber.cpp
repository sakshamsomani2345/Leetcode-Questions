// Given an array nums containing n distinct numbers in the range[0, n], return the only number in the range that is missing from the array.
// Example 1:
// Input: nums = [3,0,1]
// Output: 2
// Explanation: n = 3 since there are 3 numbers, so all numbers are in the range [0,3]. 2 is the missing number in the range since it does not appear in nums.
// Example 2:
// Input: nums = [0,1]
// Output: 2
// Explanation: n = 2 since there are 2 numbers, so all numbers are in the range [0,2]. 2 is the missing number in the range since it does not appear in nums.
// Example 3:
// Input: nums = [9,6,4,2,3,5,7,0,1]
// Output: 8
// Explanation: n = 9 since there are 9 numbers, so all numbers are in the range [0,9]. 8 is the missing number in the range since it does not appear in nums.
#include <iostream>
#include<unordered_map>
#include <vector>
    using namespace std;
int missingnumber(vector<int> &nums)
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
    ///optimise solution
    unordered_map<int, int> maps;
    if (nums.size() == 0)
    {
        return 0;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        maps[nums[i]]++;
    }
    int y = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (maps.count(y) > 0)
        {
            y++;
            continue;
        }
        else
        {
            return y;
        }
        y++;
    }
    return nums.size();
    // another optimise solution
//     int length = nums.length;
//     int sum = 0;
//     while (length > 0)
//     {
//         sum += length;
//         length--;
//     }
//     for (int i = 0; i < nums.length; i++)
//     {
//         sum -= nums[i];
//     }
//     return sum;
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
    missingnumber(y);
}