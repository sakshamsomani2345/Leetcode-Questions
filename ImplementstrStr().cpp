// 28. Implement strStr()
// Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
// Clarification:
// What should we return when needle is an empty string? This is a great question to ask during an interview.
// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().
// Example 1:
// Input: haystack = "hello", needle = "ll"
// Output: 2
// Example 2:
// Input: haystack = "aaaaa", needle = "bba"
// Output: -1
// Example 3:
// Input: haystack = "", needle = ""
// Output: 0
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle)
{
    if (needle.length() == 0 || haystack == needle)
        return 0;
    if (haystack.length() == 0 || needle.length() > haystack.length())
        return -1;

    for (int i = 0; i <= haystack.length() - needle.length(); ++i)
        if (haystack.substr(i, needle.length()) == needle)
            return i;

    return -1;
}
int main()
{
string haystack,needle;
cin>>haystack,needle;
    cout << strStr(haystack,needle);
}