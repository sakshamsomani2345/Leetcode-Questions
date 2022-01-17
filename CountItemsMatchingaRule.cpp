// 1773. Count Items Matching a Rule
// You are given an array items, where each items[i] = [typei, colori, namei] describes the type, color, and name of the ith item. You are also given a rule represented by two strings, ruleKey and ruleValue.
// The ith item is said to match the rule if one of the following is true:
// ruleKey == "type" and ruleValue == typei.
// ruleKey == "color" and ruleValue == colori.
// ruleKey == "name" and ruleValue == namei.
// Return the number of items that match the given rule.
// Example 1:
// Input: items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]], ruleKey = "color", ruleValue = "silver"
// Output: 1
// Explanation: There is only one item matching the given rule, which is ["computer","silver","lenovo"].
// Example 2:
// Input: items = [["phone","blue","pixel"],["computer","silver","phone"],["phone","gold","iphone"]], ruleKey = "type", ruleValue = "phone"
// Output: 2
// Explanation: There are only two items matching the given rule, which are ["phone","blue","pixel"] and ["phone","gold","iphone"]. Note that the item ["computer","silver","phone"] does not match.
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{

    int n, count = 0;
    if (ruleKey == "type")
        n = 0;
    else if (ruleKey == "color")
        n = 1;
    else
        n = 2;

    for (auto e : items)
    {
        if (e[n] == ruleValue)
            count++;
    }

    return count;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<string>> y;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <3; k++)
        {
            string a;
            cin>>a;
            y[i].push_back(a);
        }
        
        
    }
   string rulekey,rulevalue;
   cin>>rulekey,rulevalue;
    cout << countMatches(y,rulekey,rulevalue)
}