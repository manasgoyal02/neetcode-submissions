class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        int result=0;
        for(int j=0;j<nums.size();j++){
            int key=0;
            key=nums[j];
            result=target-key;
            if(map.count(result)>0 && map[result]!=j){
                return {j,map[result]};
            }
        }
        return {-1,-1};
    }
};
