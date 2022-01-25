// 791. Custom Sort String
// You are given two strings order and s. All the words of order are unique and were sorted in some custom order previously.
// Permute the characters of s so that they match the order that order was sorted. More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.
// Return any permutation of s that satisfies this property.
// Example 1:
// Input: order = "cba", s = "abcd"
// Output: "cbad"
// Explanation: 
// "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
// Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
// Example 2:
// Input: order = "cbafg", s = "abcd"
// Output: "cbad"
// Constraints:
// 1 <= order.length <= 26
// 1 <= s.length <= 200
// order and s consist of lowercase English letters.
// All the characters of order are unique.
#include<bits/stdc++.h>
using namespace std;
string customSortString(string order, string s)
{
    map<char, int> mp;
    map<char, int> mp1;

    for (char ch : order)
        mp[ch]++;
    for (char ch : s)
        mp1[ch]++;
    string ans;

    for (char ch : order)
    {
        auto it = mp1.find(ch);
        if (it != mp1.end())
        {
            int x = it->second;
            while (x--)
                ans += ch;
        }
    }

    for (char ch : s)
    {
        auto it = mp.find(ch);
        if (it == mp.end())
            ans += ch;
    }

    return ans;
}
// 2nd brute force approach
// string customSortString(string order, string s)
// {
//     int i, j;
//     string g = "";
//     string k = "";
//     bool b;
    // for (i = 0; i < order.size(); i++)
    // {
    //     for (j = 0; j < s.size(); j++)
    //     {
    //         if (order[i] == s[j])
    //         {
    //             g = g + order[i];
    //         }
    //     }
    // }
    // for (i = 0; i < s.size(); i++)
    // {
    //     for (j = 0; j < g.size(); j++)
    //     {
    //         if (s[i] == g[j])
    //         {
//                 b = true;
//                 break;
//             }
//             else
//             {
//                 b = false;
//             }
//         }
//         if (!b)
//         {
//             k = k + s[i];
//         }
//     }
//     return g + k;
// }
int main(){
string order;
cin>>order;
string s;
cin>>s;
cout<<customSortString(order,s);
}