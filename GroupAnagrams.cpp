#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> m;

    for (int i = 0; i < strs.size(); i++)
    {
        string str = strs[i];
        sort(str.begin(), str.end());
        m[str].push_back(strs[i]);
    }

    vector<vector<string>> ans;
    for (auto it : m)
    {
        ans.push_back(it.second);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<string> x;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin>>a;
        x.push_back(a);
    }
    vector<vector<string>> y=groupAnagrams(x);
    for (int i = 0; i < y.size(); i++)
    {
        for (int j = 0; j <y[i].size(); j++)
        {
            cout<<y[j][i];
            
        }
        
        cout<<endl;
    }
    
    

}