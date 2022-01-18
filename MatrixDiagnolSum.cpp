// 1572. Matrix Diagonal Sum
// Given a square matrix mat, return the sum of the matrix diagonals.
// Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.
// Example 1:
// Input: mat = [[1,2,3],
//               [4,5,6],
//               [7,8,9]]
// Output: 25
// Explanation: Diagonals sum: 1 + 5 + 9 + 3 + 7 = 25
// Notice that element mat[1][1] = 5 is counted only once.
// Example 2:
// Input: mat = [[1,1,1,1],
//               [1,1,1,1],
//               [1,1,1,1],
//               [1,1,1,1]]
// Output: 8
// Example 3:
// Input: mat = [[5]]
// Output: 5
// Constraints:
// n == mat.length == mat[i].length
// 1 <= n <= 100
// 1 <= mat[i][j] <= 100
#include<iostream>
#include<vector>
using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{
    int sum = 0;
    int n = mat[0].size();
    if (n % 2 != 0)
    {
        sum = sum - mat[n / 2][n / 2];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum = sum + mat[i][j];
            }
            if (i + j == n - 1)
            {
                sum = sum + mat[i][j];
            }
        }
    }

    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin>>a;
            arr[i].push_back(a);
        }
        
    }
cout<<diagonalSum(arr);
}