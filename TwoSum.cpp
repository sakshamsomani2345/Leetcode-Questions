// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:
// Input: nums = [3,3], target = 6
// Output: [0,1]
#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> v, int x)
{
    vector<int> s;
    for (int i = 0; i < v.size()-1; i++)
    {
        for (int j = i+1; j <v.size(); j++)
        {
                if(v[i]+v[j]==x){
                s.push_back(i);
                s.push_back(j);
                break;
                }
        }
        
    }
   return s; 
}
vector<int> twoSum(vector<int> v, int x)
{
   int a=v[0];
   int 
}
int main(){
vector<int> v;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int a;
    cin>>a;
    v.push_back(a);
}

int x;
cin>>x;
 vector<int> c=twoSum(v,x);
 for (int i = 0; i < 2; i++)
 {
     cout << c[i];
 }
}
