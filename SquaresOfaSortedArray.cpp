#include <bits/stdc++.h>
using namespace std;
    vector<int> sortedSquares(vector<int>& nums) {
      int i=-1,j=0;
      vector<int> x;
      for(int k=0;k<nums.size();k++){
          if(nums[k]<0){
              i=k;
          }
      }
      j=i+1;
      while(i>=0 && j<nums.size()){
          if(abs(nums[i])>=nums[j]){
          x.push_back(nums[j]*nums[j]);
          j++;
          }else{
                 x.push_back(nums[i]*nums[i]);
                 i--;
          }
      }
      if(j<nums.size()){
          while(j<nums.size()){
          x.push_back(nums[j]*nums[j]);
j++;
          }
      }
          while(i>=0){
          x.push_back(nums[i]*nums[i]);
i--;
          }
      return x;
    }

int main()
{
    int n, m;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin>>x[i];
    }
}