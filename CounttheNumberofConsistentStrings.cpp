// 1684. Count the Number of Consistent Strings
// You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.
// Return the number of consistent strings in the array words.
// Example 1:
// Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
// Output: 2
// Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
// Example 2:
// Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
// Output: 7
// Explanation: All strings are consistent.
// Example 3:
// Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
// Output: 4
// Explanation: Strings "cc", "acd", "ac", and "d" are consistent.
#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <iterator>
#include <climits>
using namespace std;
bool check(string words,unordered_map<char,bool> maps){
for (int i = 0; i < words.size(); i++)
{
    if(maps.count(words[i])>0){

    }else{
        return false;
    }
}
return 1;
}
int countConsistentStrings(string allowed, vector<string> &words)
{
    int count=0;
unordered_map<char,bool> maps;
for (int i = 0; i < allowed.size(); i++)
{
    maps[allowed[i]]=true;
}
for (int i = 0; i < words.size(); i++)
{
    count+=check(words[i],maps);
}

return count;
}
int main()
{

    string allowed;
    cin>>allowed;
    int n;
    cin >> n;
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        words.push_back(a);
    }
    cout << countConsistentStrings(allowed,words);
}