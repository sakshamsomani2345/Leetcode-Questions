#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    int result = 0;
    int diff = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (diff > sum - target)
            {
                diff = sum - target;
                result = sum;
            }
            if (sum < target)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<int>> x = threeSum(arr);
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[i].size(); j++)
        {
            cout << x[i][j] << " " << endl;
        }
    }
}