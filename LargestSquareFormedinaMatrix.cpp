#include <bits/stdc++.h>
using namespace std;
int maximalSquare(vector<vector<char>> &matrix,int i,int j,int &maxi)
{
if(i>=matrix.size()|| j>=matrix[0].size()){
    return 0;
}
int right=maximalSquare(matrix,i,j+1,maxi);
int diagnol=maximalSquare(matrix,i+1,j+1,maxi);
int down=maximalSquare(matrix,i+1,j+1,maxi);
if(matrix[i][j]==1){
    int ans=1+min(right,min(diagnol,down));
    maxi=max(maxi,ans);
    return ans;
}else{
    return 0;
}
}
int maximalSquares(vector<vector<int>> &mat,int i,int j,int &maxi)
{
int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>> dp(row+1, vector<int> (col+1, 0));
        
        for(int i = row-1; i>=0; i--){
            for(int j = col-1; j>=0; j--){
                
                int right = dp[i][j+1];
                int diagonal = dp[i+1][j+1];
                int down = dp[i+1][j];
                
                if(mat[i][j] == 1){
                    dp[i][j] = 1 + min(right, min(diagonal, down));
                    
                    maxi = max(maxi, dp[i][j]);
                }
                else
                    dp[i][j] = 0;
            }
        }
        
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> x(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x[i][j];
        }
    }
}