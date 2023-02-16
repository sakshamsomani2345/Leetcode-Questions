#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> x;
  set<vector<int>> st;
  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++)
  {
    int target = -1 * nums[i];
    int start = i + 1;
    int end = nums.size() - 1;
    while (start < end)
    {
      if (nums[start] + nums[end] == target)
      {
       st.insert({nums[i], nums[start], nums[end]});
        start++;
        end--;
      }
      else if (nums[start] + nums[end] > target)
      {
        end--;
      }
      else
      {
        start++;
      }
    }
  }
  for (auto it : st)
  {
    x.push_back(it);
  }
  return x;
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