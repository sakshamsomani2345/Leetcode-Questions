#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int l, int h)
{
    int low = 0, mid = 0, high = h;
    while (mid <= high)
    {
        if (arr[mid] == 1)
        {
            mid++;
        }
        else if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
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
    reverse(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}