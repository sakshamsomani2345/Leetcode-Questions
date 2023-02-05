#include <bits/stdc++.h>
using namespace std;
 int kthSmallest(vector<vector<int>>& matrix, int k) {
         int low=matrix[0][0];
         int n=matrix.size();
         int high=matrix[n-1][n-1];
         while(low<high){
            int mid=(low+high)/2;
            int count=0;
            for (int i = 0; i < n; i++)
            {
                count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(count<k){
                low=mid+1;
            }else{
                high=mid;
            }
            
         }
         return low;

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
}