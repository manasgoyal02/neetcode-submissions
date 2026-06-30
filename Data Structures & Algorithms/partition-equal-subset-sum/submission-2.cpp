class Solution {
public:
    bool check(vector<int>&nums,int csum,int rsum,int i,vector<vector<int>>&dp){
        if(csum==rsum) return true;
        if(i>=nums.size()) return false;
        if(dp[csum][rsum]!=-1) return dp[csum][rsum];
        int take=check(nums,csum+nums[i],rsum-nums[i],i+1,dp);
        int nt=check(nums,csum,rsum,i+1,dp);

        return dp[csum][rsum]=take||nt;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        vector<vector<int>>dp(sum+1,vector<int>(sum+1,-1));
        return check(nums,0,sum,0,dp);
    }
};
