#include <bits/stdc++.h>
using namespace std;
void twoSum(vector<int> &nums, int target)
{
    vector<int> ans;
    set<int> s;
    int i = 1;
    int j = nums.size();
    while (i <=j)
    {
        int sum = nums[i-1] + nums[j-1];
        if (sum == target)
        {
            cout<<i<<j;
            // s.insert({nums[i], nums[j]});
            // i++;
            // j--;
            break;
        }
        else if (sum < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    // for (auto i : s)
    // {
    //     ans.push_back(i);
    //     ans.push_back(j);
    // }
    // return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int target;
    cin >> target;
    twoSum(x, target);
}