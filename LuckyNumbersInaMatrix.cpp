// Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.
// A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.
// Example 1:
// Input: matrix = [[3,7,8],[9,11,13],[15,16,17]]
// Output: [15]
// Explanation: 15 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 2:
// Input: matrix = [[1,10,4,2],[9,3,8,7],[15,16,17,12]]
// Output: [12]
// Explanation: 12 is the only lucky number since it is the minimum in its row and the maximum in its column.
// Example 3:
// Input: matrix = [[7,8],[1,2]]
// Output: [7]
// Explanation: 7 is the only lucky number since it is the minimum in its row and the maximum in its column.
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> luckyNumbers(vector<vector<int>> &matrix)
{
    //         vector<int> x;
    //          for (int i = 0; i < matrix.size(); i++){
    //              int min=INT_MAX;
    //              int minindex=0;

    //         for (int j = 0; j < matrix[i].size(); j++)
    //         {
    //            if(matrix[i][j]<min){
    //                min=matrix[i][j];
    //                minindex=j;
    //            }
    //         }
    //         bool istrue=true;
    //                for (int j = 0; j < matrix[i].size(); j++)
    //         {
    //            if(matrix[i][minindex]<matrix[j][minindex]){
    //                istrue=false;
    //                break;
    //            }
    //         }
    //              if(istrue){
    //                  x.push_back(matrix[i][minindex]);
    //              }
    //     }
    //               return x;
    vector<int> ans;
    for (int i = 0; i < matrix.size(); i++)
    {
        int minidx = 0;
        for (int j = 0; j < matrix[0].size(); j++)
            if (matrix[i][minidx] > matrix[i][j])
                minidx = j;

        int maxele = matrix[0][minidx];
        for (int j = 0; j < matrix.size(); j++)
            if (matrix[j][minidx] > maxele)
                maxele = matrix[j][minidx];

        if (maxele == matrix[i][minidx])
            ans.push_back(maxele);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin >> a;
            arr[i].push_back(a);
        }
    }
    vector<int> x = luckyNumbers(arr);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << " " ;
    }
}