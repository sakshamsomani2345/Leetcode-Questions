// 2114. Maximum Number of Words Found in Sentences
// A sentence is a list of words that are separated by a single space with no leading or trailing spaces.
// You are given an array of strings sentences, where each sentences[i] represents a single sentence.
// Return the maximum number of words that appear in a single sentence.
// Example 1:
// Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
// Output: 6
// Explanation: 
// - The first sentence, "alice and bob love leetcode", has 5 words in total.
// - The second sentence, "i think so too", has 4 words in total.
// - The third sentence, "this is great thanks very much", has 6 words in total.
// Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
// Example 2:
// Input: sentences = ["please wait", "continue to fight", "continue to win"]
// Output: 3
// Explanation: It is possible that multiple sentences contain the same number of words. 
// In this example, the second and third sentences (underlined) have the same number of words.
#include <iostream>
#include <vector>
#include<math.h>
#include <climits>
#include<string>
using namespace std;
int mostWordsFound(vector<string> &sentences)
{
    int maximum=0;
    for (int i = 0; i < sentences.size(); i++)
    {
        int count = 0;

        string s=sentences[i];
        for (int j = 0; j <s.size() ; j++)
        {
            if(s[j]==' '){
                count++;
            }
        }
        maximum=max(count+1,maximum);
        
    }
   return maximum; 
}
int main()
{
    int m;
    vector<string> x = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    // cin >> m;
    // for (int i = 0; i < m; i++)
    // {
    //     string a;
    //     getline(cin,a);
    //     x.push_back(a);
    // }
    cout << mostWordsFound(x);
}