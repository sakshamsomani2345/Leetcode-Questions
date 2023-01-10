#include <bits/stdc++.h>
using namespace std;
void subsequence(int *arr, int n, vector<int> x, int index)
{
    if (index >= n)
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i];
        }
cout<<endl;
        return;
    }
    x.push_back(arr[index]);
    subsequence(arr, n, x, index + 1);
    x.pop_back();
    subsequence(arr, n, x, index+1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> x;
    subsequence(arr, n, x, 0);
}