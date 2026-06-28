class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> dup;
        for(int i=0;i<nums.size();i++){
            dup[nums[i]]++;
        }

        for(auto it:dup){
            if(it.second>1){
                return true;
            }
        }
        return false;
    }
};