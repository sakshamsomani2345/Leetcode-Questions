#include <bits/stdc++.h>
using namespace std;
void onesMinusZeros(vector<vector<int>> &grid)
{
    vector<pair<int, int>> rows, columns;

    for (int i = 0; i < grid.size(); i++)
    {
        int countzerorow = 0, countonerow = 0;
        for (int j = 0; j < grid[0].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                countonerow++;
            }
            else
            {
                countzerorow++;
            }
        }
        rows.push_back({countonerow, countzerorow});
    }

    for (int i = 0; i < grid[0].size(); i++)
    {
        int countzerocolumn = 0, countonecolumn = 0;
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[j][i] == 1)
            {
                countonecolumn++;
            }
            else
            {
                countzerocolumn++;
            }
        }
        columns.push_back({countonecolumn, countzerocolumn});
    }
    // vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size()));
    // for (int i = 0; i < grid.size(); i++)
    // {
    //     for (int j = 0; j < grid[0].size(); j++)
    //     {
    //         int countonerow = rows[i].first;
    //         int countzerorow = rows[i].second;
    //         int countonecolumn = columns[j].first;
    //         int countzerocolumn = columns[j].second;
    //         diff[i][j] = countonerow + countonecolumn - countzerorow - countzerocolumn;
    //     }
    // }
     vector<vector<int>> diff(grid.size(), vector<int>(grid[0].size()));
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[0].size(); j++)
        {
         
           cout<<diff[i][j];
        }
        cout<<endl;
    }
}
// other optimisation
//  vector<vector<int>> onesMinusZeros(vector<vector<int>>& A) {
//      int m = A.size(), n = A[0].size();
//      vector<int> r_one(m), c_one(n), r_zero(m), c_zero(n);
//      for(int i = 0;i < m; i++)
//          for(int j = 0;j < n; ++j)
//              if(A[i][j])
//                  r_one[i]++ , c_one[j]++;
//              else
//                  r_zero[i]++, c_zero[j]++;
//      for(int i=0;i<m;i++)
//          for(int j=0;j<n;j++)
//              A[i][j] = r_one[i] + c_one[j] - r_zero[i] - c_zero[j];
//      return A;
//  }
//hashmap optimised solution
	// vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
	// 	vector<vector<int>>v(grid.size(), vector<int>(grid[0].size(), 0));
	// 	unordered_map<int, int>m1, m2;
	// 	for(int i=0; i<grid.size(); i++){
	// 		for(int j=0; j<grid[0].size(); j++){
	// 			if(grid[i][j]==1){
	// 				m1[i]++;
	// 				m2[j]++;
	// 			}
	// 		}
	// 	}
	// 	for(int i=0; i<grid.size(); i++){
	// 		for(int j=0; j<grid[0].size(); j++){
	// 			v[i][j]=m1[i]+m2[j]-(grid.size()-m1[i]+grid[0].size()-m2[j]);
	// 		}
	// 	}
	// 	return v;
	// }

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    onesMinusZeros(grid);
}