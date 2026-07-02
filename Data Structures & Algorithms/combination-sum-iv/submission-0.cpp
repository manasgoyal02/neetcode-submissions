class Solution {
public:
    int func(vector<int>&nums,int &target,int sum,vector<int>&dp){
        if(sum>target) return 0;
        if(sum==target) return 1;

        if(dp[sum]!=-1) return dp[sum];

        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans+=func(nums,target,sum+nums[i],dp);
        }

        return dp[sum]=ans;
        
    }
    int combinationSum4(vector<int>& nums, int target) {
        vector<int>dp(target+1,-1);
        return func(nums,target,0,dp);
    }
};