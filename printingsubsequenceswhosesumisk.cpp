#include <bits/stdc++.h>
using namespace std;
void subsequence(int *arr, int n, vector<int> x, int index, int sum, int y,vector<int> &z)
{
    if(index==n){
    // if (sum == y)
    // {
        int count=0;


        for (int i = 0; i < x.size(); i++)
        {
            count+= x[i];
        }
     z.push_back(count);
        // return;
    // }
    return;
    }
    x.push_back(arr[index]);
    y += arr[index];
    subsequence(arr, n, x, index + 1, sum, y,z);
    x.pop_back();
    y -= arr[index];
    subsequence(arr, n, x, index + 1, sum, y,z);
}
// void subsequence(int *arr, int n, vector<int> x, int index, int sum, int y,int &count)
// {
//     if(index==n){
//     if (sum == y)
//     {
       
//      count++;
//     }
//     return;
//     }
//     x.push_back(arr[index]);
//     y += arr[index];
//     subsequence(arr, n, x, index + 1, sum, y,count);
//     x.pop_back();
//     y -= arr[index];
//     subsequence(arr, n, x, index + 1, sum, y,count);
// }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> x,y;
    int sum;
    cin >> sum;
    int count=0;
    subsequence(arr, n, x, 0, sum, 0,count);
    cout<<count;
   
    
}