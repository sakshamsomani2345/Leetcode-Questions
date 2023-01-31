#include <bits/stdc++.h>
using namespace std;
int bestTeamScore(vector<int> &scores, vector<int> &ages)
{
    vector<pair<int, int>> x;
    for (int i = 0; i < ages.size(); i++)
    {
        x.push_back({ages[i], scores[i]});
    }
    sort(x.begin(), x.end());
    int sum = 0;
    int arr[ages.size()];
    arr[0]=x[0].second;
    for (int i = 1; i < ages.size(); i++)
    {
        int maxi = x[i].second;
        for (int j = 0; j < i; j++)
        {
            if (x[i].second >= x[j].second)
            {
                maxi = max(maxi, arr[j] + x[i].second);
            }
        }
        arr[i] = maxi;
    }
for (auto it : arr)
{
    sum=max(it,sum);
}
return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> scores(n), age(n);
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> age[i];
    }
    cout<<bestTeamScore(scores, age);
}