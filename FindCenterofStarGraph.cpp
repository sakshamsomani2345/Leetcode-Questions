#include<bits/stdc++.h>
using namespace std;
int findCenter(vector<vector<int>> &edges)
{
    int x = edges[0][0];
    int y = edges[0][1];
    if (edges[1][0] == x || edges[1][1] == x)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main(){
int n;
cin>>n;
vector<vector<int>> x(n);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        int a;
        cin>>a;
        x[i].push_back(a);
    }
}
cout<<findCenter(x);
}