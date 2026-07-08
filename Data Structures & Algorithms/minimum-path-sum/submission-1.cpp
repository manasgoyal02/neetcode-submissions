class Solution {
public:
    int func(vector<vector<int>>&grid,int i, int j,vector<vector<int>>&dp){
        if(i>=grid.size() || j>=grid[0].size()){
            return INT_MAX;
        }

        if(i==grid.size()-1 && j==grid[0].size()-1){
            return grid[i][j];
        }

        if(dp[i][j]!=-1) return dp[i][j];
        
        int right=0;
        right=func(grid,i,j+1,dp);
        if(right!=INT_MAX) right=right+grid[i][j];

        int down=0;
        down=func(grid,i+1,j,dp);

        if(down!=INT_MAX) down=down+grid[i][j];

        return  dp[i][j]= min(down,right);
    }

    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return func(grid,0,0,dp);
    }
};