#include <bits/stdc++.h>
using namespace std;
int maxPoints(vector<vector<int>> &points)
{
    int n = points.size();
    int maxi = 2;
    if(n<=2){
            return n;
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int total = 2;
            for (int k = 0; k < n; k++)
            {
                if (k != i && k != j)
                {
                    if ((points[j][1] - points[i][1]) * (points[i][0] - points[k][0]) == (points[i][1] - points[k][1] )* (points[j][0] - points[i][0]))
                    {
                        total++;
                    }
                }
            }
            maxi = max(maxi, total);
        }
    }
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> points(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> points[i][j];
        }
    }
    cout << maxPoints(points);
}