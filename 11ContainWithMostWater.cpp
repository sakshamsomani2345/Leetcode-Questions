#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
   int i=0;
   int maxi=INT_MIN;
   int j=height.size()-1;
   while (i<j)
   {
    int area=min(height[i],height[j])*(j-i);
    maxi=max(area,maxi);
    if(height[i]>height[j]){
        j--;
    }else{
        i++;
    }
   }
   
    return maxi;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   cout<<maxArea(arr);
}