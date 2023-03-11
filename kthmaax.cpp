#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   int arr[n];
   priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {

        cin>>arr[i];
        pq.push(arr[i]);
    }
    int k;
    cin>>k;
    for (int i = 0; i < n-k; i++)
    {
        pq.pop();
    }
    cout<<pq.top();
}