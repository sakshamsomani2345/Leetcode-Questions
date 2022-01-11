// 349. Intersection of Two Arrays
// Given two integer arrays nums1 and nums2,
// return an array of their intersection.Each element in the result must be unique and you may return the result in any order.
// Example 1 :
// Input : nums1 = [ 1, 2, 2, 1 ],
//         nums2 = [ 2, 2 ] Output : [2] Example 2 :
// Input : nums1 = [ 4, 9, 5 ],
//         nums2 = [ 9, 4, 9, 8, 4 ] Output : [ 9, 4 ] Explanation : [ 4, 9 ] is also accepted.
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int n = nums1.size();
    int m = nums2.size();

    vector<int> c;

    int i = 0, j = 0;
    while (i < n and j < m)
    {
        if (nums1[i] > nums2[j])
        {
            j++;
        }
        else if (nums1[i] < nums2[j])
        {
            i++;
        }
        else
        {
            c.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    map<int, int> mp;
    for (int i = 0; i < c.size(); i++)
    {
        mp[c[i]]++;
    }
    vector<int> v;
    for (auto x : mp)
    {
        v.push_back(x.first);
    }
    return v;
}
int main()
{
    int m, n;
    vector<int> x;
    vector<int> y;
    cin >> m >> n;
    for (int i = 0; i < m + n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        y.push_back(a);
    }
    vector<int> z=intersection( x,y);

     for (int i = 0; i < z.size(); i++)
    {
        cout << z[i] << " ";
    }
}