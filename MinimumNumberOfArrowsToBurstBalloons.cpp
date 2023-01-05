#include <bits/stdc++.h>
using namespace std;
bool comp(vector<int> a,vector<int> b){
    return a[1]<b[1];
}
int findMinArrowShots(vector<vector<int>> &points)
{
    int count=0;
    sort(points.begin(),points.end(),comp);
    int arrow=1;
    int end=points[0][1];
    for ( int i = 0; i < points.size(); i++)
    {
        if(end>points[i][0]){
            continue;
        }else{
            arrow++;
            end=points[i][1];
        }
    }
   return arrow; 
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> x(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
cout<<findMinArrowShots(arr);
}