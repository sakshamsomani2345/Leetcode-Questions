#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
{
    vector<vector<int>> arr(rowSum.size(),vector<int>(colSum.size()));
    for (int j = 0; j < rowSum.size(); j++)
    {
        for (int i = 0; i < colSum.size(); i++)
        {
            arr[j][i]=min(rowSum[j],rowSum[i]);
             rowSum[j]-=arr[j][i];
             colSum[i]-=arr[j][i];
        }
        
    }
    return arr;

}