#include<bits/stdc++.h>
using namespace std;
void printpermute(vector<int> &ds,vector<int> nums,vector<vector<int>> &ans,int freq[]){
  if(ds.size()==nums.size()){
      ans.push_back(ds);
      return;
  }
  for (int i = 0; i < nums.size(); i++)
  {
      if(!freq[i]){
          ds.push_back(nums[i]);
          freq[i]=1;
          printpermute(ds,nums,ans,freq);
          freq[i]=0;
          ds.pop_back();

      }
  }
  
    

}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    int freq[nums.size()];
    for (int i = 0; i < nums.size(); i++)
    {
        freq[i]=0;
    }
    printpermute(ds,nums,ans,freq);
return ans;
    
}
int main(){
vector<int> c;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int a;
    cin>>a;
    c.push_back(a);
}
vector<vector<int>> x=permute(c);
for (int i = 0; i < x.size(); i++)
{
    for (int j = 0; j < x[i].size(); j++)
    {
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
    
}


}