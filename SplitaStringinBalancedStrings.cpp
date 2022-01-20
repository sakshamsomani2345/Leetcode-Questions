// 1221. Split a String in Balanced Strings
// Balanced strings are those that have an equal quantity of 'L' and 'R' characters.
// Given a balanced string s, split it in the maximum amount of balanced strings.
// Return the maximum amount of split balanced strings.
// Example 1:
// Input: s = "RLRRLLRLRL"
// Output: 4
// Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.
// Example 2:
// Input: s = "RLLLLRRRLR"
// Output: 3
// Explanation: s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.
// Example 3:
// Input: s = "LLLLRRRR"
// Output: 1
// Explanation: s can be split into "LLLLRRRR".
#include<iostream>
#include<string>
using namespace std;
int balancedStringSplit(string s)
{
    int count=0;
    int sum=0;
    int i=0;
    while (i<s.size())
    {
       
            if(s[i]=='L'){
                sum++;
            }
            if(s[i]=='R'){
                sum--;
            }
            i++;
        
        if (sum == 0)
        {
            count++;
        }
    }
  
    return count;
    
}
int main(){
string s;
cin>>s;
cout<<balancedStringSplit(s);
}