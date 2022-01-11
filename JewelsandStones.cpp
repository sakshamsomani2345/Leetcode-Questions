// 771.Jewels and Stones
// You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels.
// Letters are case sensitive, so "a" is considered a different type of stone from "A".
// Example 1:
// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3
// Example 2:
// Input: jewels = "z", stones = "ZZ"
// Output: 0
#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;
int numJewelsInStones(string jewels, string stones)
{
    unordered_map<char,int> maps;
    for (int i = 0; i < stones.size(); i++)
    {
        maps[stones[i]]++;
    }
    int count=0;
    for (int i = 0; i < jewels.size(); i++)
    {
        if(maps.count(jewels[i])>0){
            count=count+maps[jewels[i]];
        }
    }
    return count;
    ///anotherapproach
    // int count=0;

    // for (int i = 0; i < jewels.size(); i++)
    // {
    //     for (int j = 0; j <stones.size(); j++)
    //     {
    //         if(jewels[i]==stones[j]){
    //             count++;
    //         }
    //     }
        
    // }
    // return count;
}
int main()
{
    string s;
    cin >> s;
    string j;
    cin>>j;
    cout<<numJewelsInStones(j,s);
    
}