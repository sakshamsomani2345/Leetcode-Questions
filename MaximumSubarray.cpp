#include <iostream>
#include<climits>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
       cin>>arr[i];
   }
//    kadanes algorithm
   int max=INT_MIN;
   int end=0;
   for (int i = 0; i < n; i++)
   {
       end=end+arr[i];
       if(max<end){
           max=end;
       }
       if(end<0){
           end=0;
       }
   }
   
   cout<<max;
   
   
}