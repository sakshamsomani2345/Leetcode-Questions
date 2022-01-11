#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int> digits)
{
    int sum = 0;
    int x=digits.size();
    for (int i = 0; i < digits.size(); i++)
    {
        int ten=1;
      for (int i = 0; i < x-1; i++)
      {
          ten=ten*10;

      }
      x--;
      
        sum = sum + digits[i]*(ten);
    }
    sum = sum + 1;
    int count=0;
    int rev = 0;
    while (sum > 0)
    {
        count++;
        rev = rev * 10 + sum % 10;
        sum = sum / 10;
    }
    if(count>digits.size()){
for (int i = 0; i < digits.size()+1; i++)
{
    if(rev>=0){
        // digits[i] = rev % 10;
        digits.push_back(rev%10);
        rev = rev / 10;
    }
  
}
return digits;

    }
    int i = 0;
    
    while (rev > 0)
    {
        digits[i] = rev % 10;
        i++;
        rev = rev / 10;
    }
    return digits;
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
    vector<int> y=plusOne(nums);
    for (int i = 0; i < y.size(); i++)
    {
        cout<<y[i]<<" ";
    }
    
}