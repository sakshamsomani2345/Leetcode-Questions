#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;
string numJewelsInStones(string jewels, vector<int>x)
{
    for (int i = 0; i < x.size()/2; i++)
    {
      int y=x[i];
      for (int j = 0; j < x.size(); j++)
      {
          if(y==j){
              char temp = jewels[i];
              jewels[i]=jewels[j];
              jewels[j]=temp;
          }
      }
      

    }
    return jewels;
}
int main()
{
    string s;
    cin >> s;
   vector<int> x;
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
       int a;
       cin>>a;
       x.push_back(a);
       
   }
   
    cout << numJewelsInStones(s,x);
}