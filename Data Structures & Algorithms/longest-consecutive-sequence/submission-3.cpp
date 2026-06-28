class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        // map<int,int> map;
        // for(int i=0;i<nums.size();i++){
        //     map[nums[i]]++;
        // }
        // vector<int> nums2;
        // for(auto it: map){
        //     nums2.push_back(it.first);
        // }
        // int longest=0;
        // int count=1;
        // for(int i=0;i<nums2.size()-1;i++){
        //     if(nums2[i+1]-nums2[i]==1){
        //         count++;
        //     }
        //     else{
        //         longest=max(longest,count);
        //         count=1;
        //     }
        // }
        // longest=max(longest,count);
        // return longest;


        unordered_set<int> set;
        for(int i=0;i<nums.size();i++){
            set.insert(nums[i]);
        }
        int longest=1;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(set.find(num-1)==set.end()){
                int current=num;
                int count=1;
                while(set.find(current+1)!=set.end()){
                    current++;
                    count++;
                }
                longest=max(longest,count);
            }
        }
        return longest;
    }
};
