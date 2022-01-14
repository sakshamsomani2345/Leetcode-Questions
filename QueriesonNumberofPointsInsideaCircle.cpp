// 1828. Queries on Number of Points Inside a Circle
// You are given an array points where points[i] = [xi, yi] is the coordinates of the ith point on a 2D plane. Multiple points can have the same coordinates.
// You are also given an array queries where queries[j] = [xj, yj, rj] describes a circle centered at (xj, yj) with a radius of rj.
// For each query queries[j], compute the number of points inside the jth circle. Points on the border of the circle are considered inside.
// Return an array answer, where answer[j] is the answer to the jth query.
// Example 1:
// Input: points = [[1,3],[3,3],[5,3],[2,2]], queries = [[2,3,1],[4,3,1],[1,1,2]]
// Output: [3,2,2]
// Explanation: The points and circles are shown above.
// queries[0] is the green circle, queries[1] is the red circle, and queries[2] is the blue circle.
// Example 2:
// Input: points = [[1,1],[2,2],[3,3],[4,4],[5,5]], queries = [[1,2,2],[2,2,2],[4,3,2],[4,3,3]]
// Output: [2,3,2,4]
// Explanation: The points and circles are shown above.
// queries[0] is green, queries[1] is red, queries[2] is blue, and queries[3] is purple.
#include<iostream>
#include<vector>
using namespace std;
vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
{
    int q = 0;
    vector<int> result;
    while (true)
    {
        if (q == queries.size())
        {
            break;
        }
        int ri = queries[q][2];
        int count = 0;
        int d;
        for (int i = 0; i < points.size(); i++)
        {
            d = (points[i][0] - queries[q][0]) * (points[i][0] - queries[q][0]) + (points[i][1] - queries[q][1]) * (points[i][1] - queries[q][1]);
            if (d <= ri * ri)
            {
                count++;
            }
        }
        q += 1;
        result.push_back(count);
    }
    return result;
}
int main(){
    vector<vector<int>> x;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {for (int j = 0; j < 2; j++)
    {
        int a;
        cin >> a;
        x[i].push_back(a);
    }
    }
    vector<vector<int>> y;
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j <2; j++)
        {
            int a;
            cin >> a;
            y[i].push_back(a);
        }
    }
    vector<int> z=countPoints(x,y);
    for (int i = 0; i < z.size(); i++)
    {
        cout<<z[i]<<" ";
    }
    
}