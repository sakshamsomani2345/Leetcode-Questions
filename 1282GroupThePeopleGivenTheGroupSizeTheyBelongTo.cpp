#include <bits/stdc++.h>
using namespace std;
void groupThePeople(vector<int> &groupSizes)
{
    vector<vector<int>> sizes;
    unordered_map<int,vector<int>> maps;
    for (int i = 0; i < groupSizes.size(); i++)
    {
        maps[groupSizes[i]].push_back(i);
    }
    for(auto it:maps){
        int val=it.first;
        vector<int> rs;
        for(auto x:it.second){
            rs.push_back(x);
            if(val==rs.size()){
                sizes.push_back(rs);
                rs={};
            }
        }
    }
    for (int i = 0; i < sizes.size(); i++)
    {
        for (int j = 0; j < sizes[i].size(); j++)
        {
            cout << sizes[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    groupThePeople(x);
}