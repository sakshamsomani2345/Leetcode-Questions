#include<iostream>
#include<string>
using namespace std;
int lengthOfLongestSubstring(string s) {
    int count=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!=s[i+1]){
            count++;
            }else
            {
                
            }
            
        }
    return count+1;
        
    }
int main(){
string s;
cin>>s;
cout << lengthOfLongestSubstring(s);
}