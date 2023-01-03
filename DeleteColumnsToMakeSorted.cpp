#include <bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string> &strs)
{
    int count=0;
    for (int i = 0; i < strs[0].size(); i++)
    {
        vector<int> x;

for (int j = 0; j < strs.size(); j++)
{
    int y=int(strs[j][i]);
    cout<<y<<strs[j][i]<<endl;
  x.push_back(y);  
}
if(!is_sorted(x.begin(),x.end())){
    count++;
}
        
    }
 return count;   
}
 int minDeletionSize(vector<string>& strs) {
        int K = strs[0].size();
        
        int answer = 0;
        for (int col = 0; col < K; col++) {
            for (int row = 1; row < strs.size(); row++) {
                if (strs[row][col] < strs[row - 1][col]) {
                    answer++;
                    break;
                }
            }
        }
        
        return answer;
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
    cout<<minDeletionSize(x);
}