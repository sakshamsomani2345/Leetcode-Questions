void subsequence(vector<int> arr, int n, vector<int> x, int index, int sum, int y,vector<vector<int>> &z)
{
    if(index==n){
     z.push_back(x);
    return;
    }
    x.push_back(arr[index]);
    y += arr[index];
    subsequence(arr, n, x, index + 1, sum, y,z);
    x.pop_back();
    y -= arr[index];
    subsequence(arr, n, x, index + 1, sum, y,z);
}
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<int> x;
    vector<vector<int>> y;
int sum=0;
    subsequence(nums,nums.size(), x, 0, sum, 0,y);
    return y;
    }
