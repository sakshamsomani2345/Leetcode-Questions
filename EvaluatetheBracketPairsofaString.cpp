// 1807. Evaluate the Bracket Pairs of a String
// You are given a string s that contains some bracket pairs, with each pair containing a non-empty key.
// For example, in the string "(name)is(age)yearsold", there are two bracket pairs that contain the keys "name" and "age".
// You know the values of a wide range of keys. This is represented by a 2D string array knowledge where each knowledge[i] = [keyi, valuei] indicates that key keyi has a value of valuei.
// You are tasked to evaluate all of the bracket pairs. When you evaluate a bracket pair that contains some key keyi, you will:
// Replace keyi and the bracket pair with the key's corresponding valuei.
// If you do not know the value of the key, you will replace keyi and the bracket pair with a question mark "?" (without the quotation marks).
// Each key will appear at most once in your knowledge. There will not be any nested brackets in s.
// Return the resulting string after evaluating all of the bracket pairs.
// Example 1:
// Input: s = "(name)is(age)yearsold", knowledge = [["name","bob"],["age","two"]]
// Output: "bobistwoyearsold"
// Explanation:
// The key "name" has a value of "bob", so replace "(name)" with "bob".
// The key "age" has a value of "two", so replace "(age)" with "two".
// Example 2:
// Input: s = "hi(name)", knowledge = [["a","b"]]
// Output: "hi?"
// Explanation: As you do not know the value of the key "name", replace "(name)" with "?".
// Example 3:
// Input: s = "(a)(a)(a)aaa", knowledge = [["a","yes"]]
// Output: "yesyesyesaaa"
// Explanation: The same key can appear multiple times.
// The key "a" has a value of "yes", so replace all occurrences of "(a)" with "yes".
// Notice that the "a"s not in a bracket pair are not evaluated.
#include<bits/stdc++.h>
using namespace std;
string evaluate(string s, vector<vector<string>> &knowledge)
{
    unordered_map<string, string> map;
    string ans = "";
    for (int i = 0; i < knowledge.size(); i++)
    {
        map[knowledge[i][0]] = knowledge[i][1];
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            i++;
            string tmp = "";
            while (s[i] != ')')
            {
                tmp += s[i];
                i++;
            }

            if (map[tmp] != "")
                ans += map[tmp];
            else
                ans += '?';
        }
        else
            ans += s[i];
    }
    return ans;
}
int main(){
string s;
cin>>s;
int n;
cin>>n;
vector<vector<string>> x(n);
// for (int i = 0; i < n; i++)
// {
//     vector<string> y;
//     for (int j = 0; j < 2; j++)
//     {
//         string a;
//         cin>>a;
//         y.push_back(a);
//     }
//     x.push_back(y);   
// }
for (int i = 0; i < n; i++)
{
    
    for (int j = 0; j < 2; j++)
    {
        string a;
        cin >> a;
        x[i].push_back(a);
    }
}
 cout<<evaluate(s,x);
}