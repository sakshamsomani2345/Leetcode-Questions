#include <bits/stdc++.h>
using namespace std;
void subsequence(int *arr, int n, vector<int> x, int index, int sum, set<vector<int>> &z)
{
    if (index == n)
    {
        if (sum == 0)
        {
            sort(x.begin(), x.end());
            z.insert(x);
        }
        return;
    }
    if (arr[index] <= sum)
    {
        x.push_back(arr[index]);
        subsequence(arr, n, x, index + 1, sum - arr[index], z);
        x.pop_back();
    }

    subsequence(arr, n, x, index + 1, sum, z);
}
  void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&ds) {
        if(target==0) {
            ans.push_back(ds);
            return;
        }        
        for(int i = ind;i<arr.size();i++) {
            if(i!=ind && arr[i]==arr[i-1]) continue; 
            if(arr[i]>target) break; 
            ds.push_back(arr[i]);
            findCombination(i+1, target - arr[i], arr, ans, ds); 
            ds.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> x;
    int sum;
    cin >> sum;
    vector<vector<int>> y;
    set<vector<int>> z;

    subsequence(arr, n, x, 0, sum, z);
    for (auto it : z)
    {
        for (int i = 0; i < it.size(); i++)
        {
            cout << it[i] << " ";
        }
        cout << endl;
    }
}