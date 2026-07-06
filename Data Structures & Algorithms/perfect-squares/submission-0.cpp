class Solution {
public:
    int func(vector<int>&nums,int &target,int sum,int i,vector<vector<int>>&dp){
        if(sum==target) return 0;
        if(sum>target) return INT_MAX;
        if(i>=nums.size()) return INT_MAX;

        if(dp[i][sum]!=-1) return dp[i][sum];

        int take=func(nums,target,sum+nums[i],i,dp);
        if(take!=INT_MAX) take++;

        int nt=func(nums,target,sum,i+1,dp);

        return dp[i][sum] =  min(take,nt);

    }
    int numSquares(int n) {
        int no=sqrt(n);
        vector<int>nums;
        for(int i=1;i<=no;i++){
            int temp=i*i;
            nums.push_back(temp);
        }
        vector<vector<int>>dp(nums.size(),vector<int>(n+1,-1));
        return func(nums,n,0,0,dp);
    }
};