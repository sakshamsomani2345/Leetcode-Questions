#include <bits/stdc++.h>
using namespace std;
// void permutations(int *arr, int n, vector<int> x, unordered_map<int, int> maps)
// {
//     if (x.size() == n)
//     {
//         for (int i = 0; i < x.size(); i++)
//         {
//             cout << x[i] << " ";
//         }
//         cout << endl;
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (!maps[arr[i]])
//         {
//             x.push_back(arr[i]);
//             maps[arr[i]] = 1;
//             permutations(arr, n, x, maps);
//             x.pop_back();
//             maps[arr[i]] = 0;
//         }
//     }
// }
void permutations(int *arr, int n, vector<int> x,int index)
{
    if (index== n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = index; i < n; i++)
    {
        swap(arr[i], arr[index]);
        permutations(arr, n, x,index+1);
        swap(arr[i], arr[index]);
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
    vector<int> x;
    unordered_map<int, int> maps;
    permutations(arr, n, x, 0);
}