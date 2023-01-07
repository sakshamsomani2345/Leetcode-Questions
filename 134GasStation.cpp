#include <bits/stdc++.h>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    // for (int i = 0; i < gas.size(); i++)
    // {
        int sum1,sum2;
        for (int i = 0; i < gas.size(); i++)
    {
        sum1+=gas[i];
    }
    for (int i = 0; i < gas.size(); i++)
    {
        sum2+=cost[i];
    }
    if(sum1<sum2){
        return -1;
    }
        int index = 0;
        int sum = 0;
        bool x = 1;
        for (int j = 0; j < gas.size(); j++)
        {
            sum += gas[j] - cost[j];
            if (sum < 0)
            {
            sum=0;
            index=j+1;

                break;
            }
        }
        // for (int j = 0; j < gas.size(); j++)
        // {
        //     if (sum < 0)
        //     {
        //         if (x == 0)
        //         {
        //             break;
        //         }
        //     }
        //     sum += gas[j] - cost[j];
        //     if (j == i)
        //     {
        //         return j;
        //     }
        // }
    // }
    return index;
}
int main()
{
    int n;
    cin >> n;
    vector<int> gas(n), cost(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gas[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    cout<<canCompleteCircuit(gas,cost);
}