#include<iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int> nums, int target){
    if(nums.size()==0){
        return 0;
    }
    int count = 0;
    bool unique = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < target)
        {
            count++;
        }
        if (nums[i] == target)
        {
            return i;
        }
    }
    return count;
}
int main(){

    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        nums.push_back(a);
    }
    int x;
    cin>>x;
    cout<< searchInsert(nums,x);
   
}