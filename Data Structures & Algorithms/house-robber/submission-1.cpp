class Solution {
public:
    int func(vector<int>&nums,int i,vector<int>&dp){
        if(i>=nums.size()) return 0;

        if(dp[i]!=-1) return dp[i];

        int take=nums[i]+func(nums,i+2,dp);

        int nt=func(nums,i+1,dp);

        return dp[i]=max(take,nt);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return func(nums,0,dp);
    }
};
