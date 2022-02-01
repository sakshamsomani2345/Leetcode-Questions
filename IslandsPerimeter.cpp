#include<bits/stdc++.h>
using namespace std;
int islandPerimeter(vector<vector<int>> &grid)
{
    int count=0;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if(grid[i][j]==1){
                count+=4;
                if (i > 0)
                {
                    count -= grid[i - 1][j];
                }
                if (j > 0)
                {
                    count -= grid[i][j-1] ;
                }
                if (i < grid.size()-1)
                {
                    count -= grid[i + 1][j];
                }
                if (j < grid[0].size() - 1)
                {
                    count -= grid[i][j + 1];
                }
            }
           
        }
        
    }
    return count;
}
int main(){
int n;
cin>>n;
vector<vector<int>> x(n);

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        int a;
        cin>>a;
        x[i].push_back(a);
    }
    
}

cout<<islandPerimeter(x);
}