#include <bits/stdc++.h>
using namespace std;
// long long distinctNames(vector<string> &ideas)
// {
//     int n = ideas.size();
//     unordered_map<string, int> maps;
//     for (int i = 0; i < n; i++)
//     {
//         maps[ideas[i]] = 1;
//     }
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             string x=ideas[i];
//             string y=ideas[j];
//             if (i != j)
//             {
//                 int count = 0;
//                 swap(x[0], y[0]);
//                 cout<<x<<" "<<ideas[j]<<endl;
//                 if (maps.find(x) != maps.end())
//                 {
//                     count++;
//                 }
//                 if (maps.find(y) != maps.end())
//                 {
//                     count++;
//                 }
//                 if (count== 0)
//                 {
//                     sum++;
//                 }
//             }
//         }
//     }
//         return sum;

// }
long long distinctNames(vector<string> &ideas)
{
    unordered_map<string,int> maps;
    for(auto it:ideas){
        maps[it]++;
    }
    vector<vector<int>> dp(26,vector<int>(26,0));
    for (int i = 0; i < ideas.size(); i++)
    {
        string curr=ideas[i];
        char ch1=curr[0];
        for (int j = 0; j < 26; j++)
        {
            char ch2=j+'a';
            curr[0]=ch2;
            if(maps.find(curr)==maps.end()){
                dp[ch1-'a'][j]++;
            }
        }
        
    }
    long long ans=0;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            ans+=dp[i][j]*dp[j][i];
        }
        
    }
    return ans;
    
    
}
int main()
{
    int n;
    cin >> n;
    vector<string> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    cout << distinctNames(x);
}