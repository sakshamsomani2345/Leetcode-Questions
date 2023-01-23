#include<bits/stdc++.h>
using namespace std;
int findJudge(int n, vector<vector<int>>& trust) {
    vector<int> Trusted(n + 1, 0);
        for(auto person : trust){
            Trusted[person[0]]--;
            Trusted[person[1]]++;
        }
        for(int i = 1;i <= n;i++){
            if(Trusted[i] ==n - 1)
                return i;
        }
        return -1;
        
    }
int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin>>arr[i][j];
        }
        
    }
int m;
cin>>m;
    cout<<findJudge(m,arr);
}