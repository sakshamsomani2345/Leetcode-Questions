// 1678. Goal Parser Interpretation
// You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.
// Given the string command, return the Goal Parser's interpretation of command.
// Example 1:
// Input: command = "G()(al)"
// Output: "Goal"
// Explanation: The Goal Parser interprets the command as follows:
// G -> G
// () -> o
// (al) -> al
// The final concatenated result is "Goal".
// Example 2:
// Input: command = "G()()()()(al)"
// Output: "Gooooal"
// Example 3:
// Input: command = "(al)G(al)()()G"
// Output: "alGalooG"
#include <iostream>
#include <vector>
#include <math.h>
#include <climits>
#include <string>
#include <unordered_map>
#include <iterator>
using namespace std;
string interpret(string command)
{
    string ans;
    for (int i = 0; i < command.length(); i++)
    {
        if (command[i] == '(' && command[i + 1] == ')')
        {
            ans += 'o';
            i++;
        }
        else
        {
            if (command[i] != '(' && command[i] != ')')
            {
                ans += command[i];
            }
        }
    }
    return ans;
    //another approach
    // string s = "";
    // for (int i = 0; i < command.size(); i++)
    // {
    //     if (command[i] == 'G')
    //     {
    //         s += command[i];
    //     }
    //     else if (command[i] == '(' && command[i + 1] == ')')
    //     {
    //         s += 'o';
    //         i = i + 1;
    //     }
    //     else
    //     {
    //         s += "al";
    //         i += 3;
    //     }
    // }
    // return s;
}
int main()
{
    string s;
    cin >> s;
    

    cout << interpret(s);
}