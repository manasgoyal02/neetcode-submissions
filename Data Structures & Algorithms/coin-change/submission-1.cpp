class Solution {
public:
    int func(vector<int>&coins,int amount,int i){
        if(amount==0) return 0;
        if(amount < 0) return INT_MAX;
        if(i>=coins.size()) return INT_MAX;

        int inc=func(coins,amount-coins[i],i);
        if(inc!=INT_MAX) inc++;

        int nc=func(coins,amount,i+1);

        return min(inc,nc);
    }
    int coinChange(vector<int>& coins, int amount) {
        int ans=func(coins,amount,0);
        if(ans==INT_MAX) return -1;
        return ans;
    }
};
