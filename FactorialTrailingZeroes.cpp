#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count=0;
    int p=5;
    while ((n/p)>0)
    {
        count+=(n/p);
        p=p*5;
    }
    
}