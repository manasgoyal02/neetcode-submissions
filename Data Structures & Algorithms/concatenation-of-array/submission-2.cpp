class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int sz=nums.size();
        int n=2*nums.size();
        vector<int> nums2(n);
        for(int i=0;i<nums.size();i++){
            nums2[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums2[i+sz]=nums[i];
        }
        return nums2;
    }
};