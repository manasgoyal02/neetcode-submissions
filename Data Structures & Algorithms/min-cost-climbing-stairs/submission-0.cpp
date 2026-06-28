class Solution {
public:
    int func(vector<int>&cost,int i,vector<int>&dp){
        if(i>=cost.size()){
            return 0;
        }

        if(dp[i]!=-1) return dp[i];

        int single=cost[i]+func(cost,i+1,dp);
        int dou=cost[i]+func(cost,i+2,dp);

        return dp[i]=min(single,dou);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int ans=0;
        vector<int>dp1(cost.size(),-1);
        vector<int>dp2(cost.size(),-1);
        ans=min(func(cost,0,dp1),func(cost,1,dp2));
        return ans;
    }
};
