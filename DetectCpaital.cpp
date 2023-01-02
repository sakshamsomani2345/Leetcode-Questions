#include <bits/stdc++.h>
using namespace std;
 bool detectCapitalUse(string word) {
        int count=0;
         for(int i=0;i<word.size();i++){
             int x=int(word[i]);
             if(x>=65 && x<=90){
                 count++;
             }
         }
          if(count==word.size()){
            cout<<"F";
             return true;
         }
         if(count==0){
            cout<<"m";

             return true;
         }
         if(count==1 && int(word[0])>=65 && int(word[0])<=90){
            cout<<"p";

             return true;
         }
        
         
         return false;
    }
    int main(){
        string  s;
        cin>>s;
        cout<<detectCapitalUse(s);
    }