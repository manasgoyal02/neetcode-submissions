class Solution {
public:
    int func(vector<int>& nums, int prev, int i, vector<vector<int>>& dp) {
        if (i >= nums.size()) return 0;

        if (dp[prev + 1][i] != -1)
            return dp[prev + 1][i];

        int take = 0;

        if (prev == -1 || nums[i] > nums[prev]) {
            take = 1 + func(nums, i, i + 1, dp);
        }

        int nt = func(nums, prev, i + 1, dp);

        return dp[prev + 1][i] = max(take, nt);
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n + 1, vector<int>(n, -1));
        return func(nums, -1, 0, dp);
    }
};