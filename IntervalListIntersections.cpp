// 986. Interval List Intersections
// You are given two lists of closed intervals, firstList and secondList, where firstList[i] = [starti, endi] and secondList[j] = [startj, endj]. Each list of intervals is pairwise disjoint and in sorted order.
// Return the intersection of these two interval lists.
// A closed interval [a, b] (with a <= b) denotes the set of real numbers x with a <= x <= b.
// The intersection of two closed intervals is a set of real numbers that are either empty or represented as a closed interval. For example, the intersection of [1, 3] and [2, 4] is [2, 3].
// Example 1:
// Input: firstList = [[0,2],[5,10],[13,23],[24,25]], secondList = [[1,5],[8,12],[15,24],[25,26]]
// Output: [[1,2],[5,5],[8,10],[15,23],[24,24],[25,25]]
// Example 2:
// Input: firstList = [[1,3],[5,9]], secondList = []
// Output: []
// Constraints:
// 0 <= firstList.length, secondList.length <= 1000
// firstList.length + secondList.length >= 1
// 0 <= starti < endi <= 109
// endi < starti+1
// 0 <= startj < endj <= 109
// endj < startj+1
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> intervalIntersection(vector<vector<int>> &firstList, vector<vector<int>> &secondList)
{
    int i = 0;
    int j = 0;
    vector<vector<int>> t;
    while (i < firstList.size() && j < secondList.size())
    {
        vector<int> x = firstList[i];
        vector<int> y = secondList[j];

        if (y[0] <= x[1] && y[1] >= x[0])
        {
            vector<int> z;
            z.push_back(max(y[0], x[0]));
            z.push_back(min(y[1], x[1]));
            t.push_back(z);
        }
        if (x[1] < y[1])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return t;
}
int main(){
int n;
cin>>n;
vector<vector<int>> x(n);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        int a;
        cin>>a;
        x[i].push_back(a);

    }
    
}
vector<vector<int>> y(n);
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 2; j++)
    {
        int a;
        cin >> a;
        y[i].push_back(a);
    }
}

vector<vector<int>> z= intervalIntersection(x,y);
for (int i = 0; i < z.size(); i++)
{
    for (int j = 0; j < z[i].size(); j++)
    {
        cout<<z[i][j]<<" ";
    }
    cout<<endl;
    
}

}