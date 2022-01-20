// 1704. Determine if String Halves Are Alike
// You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
// Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
// Return true if a and b are alike. Otherwise, return false.
// Example 1:
// Input: s = "book"
// Output: true
// Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
// Example 2:
// Input: s = "textbook"
// Output: false
// Explanation: a = "text" and b = "book". a has 1 vowel whereas b has 2. Therefore, they are not alike.
// Notice that the vowel o is counted twice.
// Constraints:
// 2 <= s.length <= 1000
// s.length is even.
// s consists of uppercase and lowercase letters.
#include<iostream>
#include<string>
using namespace std;
bool halvesAreAlike(string s)
{
    int n=s.size();
    int i;
    int count=0;
    for ( i = 0; i < n/2; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 'i' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'){
         count++;
        }
    }
    int count1 = 0;

    for (int j = i; j < n; j++)
    {
        if (s[j] == 'a' || s[j] == 'e' || s[j] == 'o' || s[j] == 'i' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'O' || s[j] == 'I' || s[j] == 'U')
        {
            count1++;
        }
    }
    
  if(count1==count){
      return true;
  }

return false;}
int main(){
    string s;
    cin>>s;
    cout<<halvesAreAlike(s);
}