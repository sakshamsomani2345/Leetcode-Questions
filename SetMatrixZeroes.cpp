#include <bits/stdc++.h>
using namespace std;
void setZeroes(vector<vector<int>> &matrix)
{
    int isCol = false;
    for (int i = 0; i < matrix.size(); i++)
    {
        if (matrix[i][0] == 0)
        {
            isCol = true;
        }
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[0][j] = 5;
                matrix[j][0] = 5;
            }
        }
    }
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][0] == 5 || matrix[0][j] == 5)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[0][j] = 0;
        }
    }

    // See if the first column needs to be set to zero as well

    for (int i = 0; i < matrix.size(); i++)
    {
        matrix[i][0] = 0;
    }
}
// void setZeroes(vector<vector<int>> &matrix)
// {
//     set<int> row;
//     vector<int> column;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[i].size(); j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 row.insert(i);
//                 column.push_back(j);
//             }
//         }
//     }
//     for (auto it : row)
//     {
//         for (int j = 0; j < matrix[0].size(); j++)
//         {
//             matrix[it][j] = 0;
//         }
//     }
//      for (auto it : column)
//     {
//         for (int j = 0; j < matrix.size(); j++)
//         {
//             matrix[j][it] = 0;
//         }
//     }
// }
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> x(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> x[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
    setZeroes(x);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}