#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int k;
    cin >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
    int sum = 0;

        for (int j = i; j <n; j++)
        {
             sum += x[i];
             if(sum==k){
                count++;
             }
        }
    }
    cout << count;
    int sum = 0;
    unordered_map<int, int> maps;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
        if (!maps[sum])
        {
            maps[sum]++;
        }
    }
    cout<<maps[]
}