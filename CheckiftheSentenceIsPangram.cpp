// 1832. Check if the Sentence Is Pangram
// A pangram is a sentence where every letter of the English alphabet appears at least once.
// Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
// Example 1:
// Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
// Output: true
// Explanation: sentence contains at least one of every letter of the English alphabet.
// Example 2:
// Input: sentence = "leetcode"
// Output: false
#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <iterator>
#include <climits>
using namespace std;
bool checkIfPangram(string sentence)
{
    unordered_map<char,bool> maps;
    for (int i =0;i < 26; i++)
    {
        maps[char(65+i+32)]=true;

    }
    unordered_map<char,bool>::iterator it = maps.begin();
    for (int i = 0; i < sentence.size(); i++)
    {
        if(maps.count(sentence[i])>0){
            maps[sentence[i]] = false;
        }
    }
    while (it!=maps.end())
    {
        if(it->second==true){
            return false;
        }
        it++;
    }

    return true;
}
int main()
{

    string allowed;
    cin >> allowed;

    cout << checkIfPangram(allowed);
}