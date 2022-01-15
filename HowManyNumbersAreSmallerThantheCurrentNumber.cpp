#include<iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <iterator>
#include <climits>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> x;

    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] < nums[i] && i != j)
            {
                count++;
            }
        }
        x.push_back(count);
    }
    return x;
}
//another optimal apprach by sorting
//  int linearSearch(vector &v, int key)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         if (v[i] == key)
//             return i;
//     }
//     return 0;
// }
// vector smallerNumbersThanCurrent(vector &nums)
// {
//     vectorv;
//     v = nums;
//     sort(v.begin(), v.end());
//     for (int i = 0; i < nums.size(); i++)
//     {
//         nums[i] = linearSearch(v, nums[i]);
//     }
//     return nums;
// }
int main()
{

    vector<int> x;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    vector<int> y=smallerNumbersThanCurrent(x);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
}