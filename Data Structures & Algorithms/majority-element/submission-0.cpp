class Solution {
public:
    int majorityElement(vector<int>& nums) {
          int temp=nums[0];
        int count =0;
        for(int i=0;i<nums.size();i++){
            if(temp==nums[i]){
                count++;
            }
            if(temp!=nums[i]){
                count--;
            }
            if(count==0){
                temp=nums[i];
                count++;
            }

        }
        return temp;
    }
};