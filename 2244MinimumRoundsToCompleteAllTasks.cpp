#include <bits/stdc++.h>
using namespace std;
int minimumRounds(vector<int> &tasks)
{
    int count = 0;
    unordered_map<int, int> maps;
    for (int i = 0; i < tasks.size(); i++)
    {
        maps[tasks[i]]++;
    }
    for (auto it : maps)
    {
        if (it.second % 3 == 0)
        {
            count+=it.second/3;
        }
        else if (it.second == 1)
        {
            return -1;
        }
        else if (it.second == 2)
        {
            count++;
        }
        else
        {
            count += it.second / 3 + 1;
        }
    }
    return count;
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
    cout << minimumRounds(x);
}