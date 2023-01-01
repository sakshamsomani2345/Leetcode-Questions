#include <bits/stdc++.h>
using namespace std;
bool wordPattern(string pattern, string s)
{
    unordered_map<char, string> maps;
    vector<string> x;
    string y = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            x.push_back(y);
            y = "";
        }
        else
        {
            y += s[i];
        }
    }
    x.push_back(y);
    if (pattern.size() != x.size())
    {
        return false;
    }
    unordered_map<string, bool> runcheck;
    for (int i = 0; i < x.size(); i++)
    {
        if (maps.find(pattern[i]) == maps.end())
        {
            cout << x[i];
            cout << runcheck[x[i]];
            if (runcheck[x[i]])
            {
                return false;
            }
            runcheck[x[i]] = true;
            maps[pattern[i]] = x[i];
        }
        else
        {
            cout << x[i];
            if (maps[pattern[i]] != x[i])
            {
                cout << "hello";
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string pattern, s;
    cin >> pattern;
    getline(cin, s);
    cout << wordPattern(pattern, s);

    ;
}
