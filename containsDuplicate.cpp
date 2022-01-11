#include <iostream>
#include <vector>
#include<unordered_map>
#include<iterator>
using namespace std;
bool containsduplicate(vector<int> nums)
{
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i; j < nums.size(); j++)
//         {
//               if(nums[i]==nums[j]){
//                 return true;
//               };
//         }
//     };

// return false;
//otherway
unordered_map<int, int> maps;

for (int i = 0; i < nums.size(); i++)
{
    maps[nums[i]]++;
}
unordered_map<int, int>::iterator it = maps.begin();
while (it != maps.end())
{
    if (it->second >= 2)
    {
        return true;
    }
    it++;
}

return false;
}
int main()
{

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    cout<<containsduplicate(nums);
    
}