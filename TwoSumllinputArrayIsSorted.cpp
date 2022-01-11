// Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
// Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
// The tests are generated such that there is exactly one solution. You may not use the same element twice.
// Example 1:
// Input: numbers = [2,7,11,15], target = 9
// Output: [1,2]
// Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2]
// Example 2:
// Input: numbers = [2,3,4], target = 6
// Output: [1,3]
// Explanation: The sum of 2 and 4 is 6. Therefore index1 = 1, index2 = 3. We return [1, 3].
// Example 3:
// Input: numbers = [-1,0], target = -1
// Output: [1,2]
// Explanation: The sum of -1 and 0 is -1. Therefore index1 = 1, index2 = 2. We return [1, 2].
#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
vector<int> searchInsert(vector<int> numbers, int target)
{
    // if (numbers.size() == 0)
    // {
    //     vector<int> x;
    //     x.push_back(NULL);
    // }
    // vector<int> x;


    // for (int i = 0; i < numbers.size(); i++)
    // {
    // for (int j = i+1; j < numbers.size(); j++)
    // {
    //     if(numbers[i]+numbers[j]==target){
    //         x.push_back(i+1);
    //         x.push_back(j+ 1);
    //         break;
    //     }
    // }
    
    // }
    // return x;
    //otherway
    vector<int> z;
    unordered_map<int, int> maps;
    for (int i = 0; i < numbers.size(); i++)
    {
        int y = numbers[i];
        int x = target - numbers[i];
        if (maps.count(x) > 0)
        {
            z.push_back(maps[x] + 1);
            z.push_back(i + 1);
            break;
        }
        else
        {
            maps[y] = i;
        }
    }
    return z;
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
    int x;
    cin >> x;
    vector<int> y= searchInsert(nums, x);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i];
    }
    
}