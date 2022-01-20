// 804. Unique Morse Code Words
// International Morse Code defines a standard encoding where each letter is mapped to a series of dots and dashes, as follows:
// 'a' maps to ".-",
// 'b' maps to "-...",
// 'c' maps to "-.-.", and so on.
// For convenience, the full table for the 26 letters of the English alphabet is given below:
// [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
// Given an array of strings words where each word can be written as a concatenation of the Morse code of each letter.
// For example, "cab" can be written as "-.-..--...", which is the concatenation of "-.-.", ".-", and "-...". We will call such a concatenation the transformation of a word.
// Return the number of different transformations among all words we have.
// Example 1:
// Input: words = ["gin","zen","gig","msg"]
// Output: 2
// Explanation: The transformation of each word is:
// "gin" -> "--...-."
// "zen" -> "--...-."
// "gig" -> "--...--."
// "msg" -> "--...--."
// There are 2 different transformations: "--...-." and "--...--.".
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// string count(string s)
// {
//     string t[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
//     string z = "";

//     for (int i = 0; i < s.size(); i++)
//     {
//         z = z + t[s[i] - 'a'];
//     }
//     return z;
// }
// int uniqueMorseRepresentations(vector<string> &words)
// {
//     unordered_map<string, int> maps;

//     int counts = 0;
//     for (int i = 0; i < words.size(); i++)
//     {
//         string y = count(words[i]);
//         maps[y]++;
//     }
//     unordered_map<string, int>::iterator it = maps.begin();
//     while (it != maps.end())
//     {
//         it++;
//         counts++;
//     }

//     return counts;
// }
/////anotheroptimalapproach
int uniqueMorseRepresentations(vector<string> words){
    string t[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        unordered_map<string, int> maps;
    for (int i = 0; i < words.size(); i++)
    {
        string s = "";

        for (int j = 0; j < words[i].size(); j++)
        {
            s+=t[words[i][j]-'a'];
            
        }
        maps[s]++;
    }
    int counts=0;
    unordered_map<string, int>::iterator it = maps.begin();
        while (it != maps.end())
        {
            it++;
            counts++;
        }

        return counts;
}
int main()
{
    vector<string> y;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        y.push_back(a);
    }
    cout << uniqueMorseRepresentations(y);
}