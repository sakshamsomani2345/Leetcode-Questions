#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s >> p;
    unordered_map<char, int> maps;
    unordered_map<char, int> maps2;

       for (int i = 0; i < p.size(); i++)
       {
        maps[p[i]]++;
       }
      int i=0,j=0;
      while (j<s.size())
      {
        maps2[s[j]]++;
        if(j-i+1==p.size()){
            if(maps2==maps){
                cout<<i<<endl;
            }
            maps2[s[i]]--;
            if(maps2[s[i]]==0){
                maps2.erase(s[i]);
            }

            i++;
        }
        j++;
      }
    // for (int i = 0; i < p.size(); i++)
    // {
    //     maps[p[i]]++;
    // }
    // int i = 0, j = 0;
    // int count = maps.size();
    // while (j < s.size())
    // {
    //     if (maps.find(s[j]) != maps.end())
    //     {
    //         maps[s[j]]--;
    //     }
    //     if (j - i + 1 == p.size())
    //     {
    //         if (count == 0)
    //         {
    //             cout << i;
    //         }
    //         if (maps.find(s[i]) != maps.end())
    //         {
    //             maps[s[i]]++;
    //             if (maps[s[i]] == 1)
    //             {
    //                 count++;
    //             }
    //         }

    //         i++;
    //     }
    //     j++;
    // }
}