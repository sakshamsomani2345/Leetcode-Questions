#include<bits/stdc++.h>
using namespace std;
 int celebrity(vector<vector<int> >& M, int n) 
    {
        vector<int> indegree(n,0),outdegree(n,0);
        for (int i = 0; i < M.size(); i++)
        {
            for (int j = 0; j < M[0].size(); j++)
            {
               if(M[i][j]==1){
                outdegree[i]++;
                indegree[j]++;
               }
            }
            
        }
        
for (int i = 0; i < n; i++)
{
    if(indegree[i]==n-1 && outdegree[i]==0){
       return i;
    }
}

    }
int main(){
    int n;
    cin>>n;
    vector<vector<int>> grid(n,vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>grid[i][j];
        }
        
    }
cout<<celebrity(grid,n);
    
}