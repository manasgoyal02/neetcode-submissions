class Solution {
public:
    int solve(int &n,int temp,vector<int>&dp){
        if(temp==n) return 1;
        if(temp>n) return 0;

        if(dp[temp]!=-1) return dp[temp];

        int single=solve(n,temp+1,dp);

        int doub=solve(n,temp+2,dp);

        return dp[temp]=single+doub;
    }
    int climbStairs(int n) {
        int ans=0;
        vector<int>dp(n,-1);
        ans=solve(n,0,dp);
        return ans;
    }
};
