#include <bits/stdc++.h>
using namespace std;
int garbageCollection(vector<string> &garbage, vector<int> &travel)
{
    int count1 = 0;
    int indexP,indexM,indexG;
    for (int i = 0; i < garbage.size(); i++)
    {
        if (garbage[i].find("P") != string::npos)
        {
            string str=garbage[i];
            char c='P';
            int x=count(str.begin(), str.end(), c);
            count1+=x;
            indexP = i;
        }
        if (garbage[i].find("G") != string::npos)
        {
            string str=garbage[i];
            char c='G';
            int x=count(str.begin(), str.end(), c);
            count1+=x;
            indexG = i;
        }
        if (garbage[i].find("M") != string::npos)
        {
            string str=garbage[i];
            char c='M';
            int x=count(str.begin(), str.end(), c);
            count1+=x;
            indexM = i;
        }
    }
    for (int i = indexP; i >= 1; i--)
    {
        count1 += travel[i - 1];
    }
     for (int i = indexM; i >= 1; i--)
    {
        count1 += travel[i - 1];
    }
     for (int i = indexG; i >= 1; i--)
    {
        count1 += travel[i - 1];
    }
    return count1;
}
int main()
{
    int n;
    cin >> n;
    vector<string> garbage(n);
    for (int i = 0; i < n; i++)
    {
        cin >> garbage[i];
    }
    vector<int> travel(n-1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> travel[i];
    }
    cout << garbageCollection(garbage, travel);
}