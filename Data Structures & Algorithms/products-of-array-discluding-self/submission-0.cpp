class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int result=1;
        for(int i=0;i<nums.size();i++){
            result=1;
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    result=result*nums[j];
                }
            }
            
            ans.push_back(result);
        }
        return ans;
    }
};
