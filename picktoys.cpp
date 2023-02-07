#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, p;
    cin >> s;
    unordered_map<char, int> maps;
    int k;
    cin>>k;
    int count=0;
      int i=0,j=0;
      while (j<s.size())
      {
        maps[s[j]]++;
      if(maps.size()==2){
        count=max(count,j-i+1);
      }
        if(maps.size()>2){
         while (maps.size()>2)
         {
            maps[s[i]]--;
             if(maps[s[i]]==0){
                maps.erase(s[i]);
            }
            i++;
         }
        }
        j++;
      }
      if(count!=0){
          cout<< count;
      }
}