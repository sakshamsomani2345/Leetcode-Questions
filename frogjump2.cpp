long frogjump(vector<int> nums,int index){
    if(index==nums.size()-1){
        return 0;
    }
    long take=INT_MAX;
    for(int i=1;i<=nums[index];i++){
        if(index + i <= nums.size()-1)
            {
            long jump=1+frogjump(nums,index+i);
            take=min(take,jump);  }       
    }
    return take;
}
  int solve(int index, int n, vector<int>& arr, vector<int>& dp)
    {
        if(index == n ) return 0;
        if(dp[index] != -1) return dp[index];
        int minStep = 1e9;
        int jump = arr[index];

        for(int i=1; i<= jump; i++)
        {
            if(index + i <= n)
            {
                int curr = 1 + solve(index+i, n, arr, dp);
                minStep = min(minStep, curr);
            }
        }

        return dp[index] = minStep;
    }
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1, -1);
                return solve(0, n-1, nums, dp);

        // return frogjump(nums,0);
    }