// 1646. Get Maximum in Generated Array
// You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:
// nums[0] = 0
// nums[1] = 1
// nums[2 * i] = nums[i] when 2 <= 2 * i <= n
// nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
// Return the maximum integer in the array nums​​​.
// Example 1:
// Input: n = 7
// Output: 3
// Explanation: According to the given rules:
//   nums[0] = 0
//   nums[1] = 1
//   nums[(1 * 2) = 2] = nums[1] = 1
//   nums[(1 * 2) + 1 = 3] = nums[1] + nums[2] = 1 + 1 = 2
//   nums[(2 * 2) = 4] = nums[2] = 1
//   nums[(2 * 2) + 1 = 5] = nums[2] + nums[3] = 1 + 2 = 3
//   nums[(3 * 2) = 6] = nums[3] = 2
//   nums[(3 * 2) + 1 = 7] = nums[3] + nums[4] = 2 + 1 = 3
// Hence, nums = [0,1,1,2,1,3,2,3], and the maximum is max(0,1,1,2,1,3,2,3) = 3.
// Example 2:
// Input: n = 2
// Output: 1
// Explanation: According to the given rules, nums = [0,1,1]. The maximum is max(0,1,1) = 1.
// Example 3:
// Input: n = 3
// Output: 2
// Explanation: According to the given rules, nums = [0,1,1,2]. The maximum is max(0,1,1,2) = 2.
#include <iostream>
using namespace std;
int getMaximumGenerated(int n)
{
    //this is brute force
    // int x[n+1];
    // x[0]=0;
    // x[1]=1;
    // for (int i = 1; i <=n/2 ; i++)
    // {
    //     if (2 <= 2 * i <= n)
    //     {
    //         x[2 * i] = x[i];
    //     }
    //     if(2*i+1<=n){
    //         if (2 <= 2 * i + 1 <= n)
    //         {

    //             x[2 * i + 1] = x[i] + x[i + 1];
    //         }
    //     }
        
    // }
    // int max=x[0];
    // for (int i = 1; i < n+1; i++)
    // {
    //     if(x[i]>max){
    //         max=x[i];
    //     }
    // }
    // return max;

    // by dp
    int x[n+1];
    x[0]=0;
    x[1]=1;
     for (int i = 1; i <= n ; i++)
    {
        if(i%2==0){
            x[i]=x[i/2];
        }else{
            x[i]=x[i/2]+x[i/2+1];
        }

    }
    int max=x[0];
    for (int i = 1; i < n+1; i++)
    {
        if(x[i]>max){
            max=x[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cin>>n;
   cout<< getMaximumGenerated(n);
}