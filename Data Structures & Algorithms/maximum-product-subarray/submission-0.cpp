class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prod=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int temp=1;
            for(int j=i;j<nums.size();j++){
                temp=temp*nums[j];
                prod=max(temp,prod);
            }
        }
        return prod;
    }
};
