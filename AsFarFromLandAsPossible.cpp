#include <bits/stdc++.h>
using namespace std;
  int maxDistance(vector<vector<int>>& grid) {
         int delrow[] = {-1, 0, 1, 0};
    int delcol[] = {0, 1, 0, -1};
    int n = grid.size();
    queue<pair<int, pair<int, int>>> pq;
    vector<vector<int>> vis(n, vector<int>(n, 0));
    int found=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == 1)
            {
                pq.push({0, {i, j}});
                vis[i][j] = 1;
                found=1;
                count++;
            }
        }
    }
    cout<<count;
    if(!found || count==n*n){
        return -1;
    }
    int maxi = 0;
    while (!pq.empty())
    {
        int distance = pq.front().first;
        // cout<<distance<<" ";
        int row = pq.front().second.first;
        maxi = max(maxi, distance);
        int col = pq.front().second.second;
        pq.pop();

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n && grid[nrow][ncol] == 0 && !vis[nrow][ncol])
            {
                vis[nrow][ncol] = 1;
                int x = distance + 1;
                pq.push({x, {nrow, ncol}});
            }
        }
    }
    return maxi;
    }
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << maxDistance(grid);
}