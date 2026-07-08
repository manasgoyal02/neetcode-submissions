class Solution {
public:
    int func(vector<int>&nums,int &target, int sum,int i,map<pair<int,int>,int>&mp){
        if(i>nums.size()) return 0;
        if(i==nums.size() && sum==target) return 1;
        if(i==nums.size() && sum!=target) return 0;
        if(mp.find({i,sum})!=mp.end()) return mp[{i,sum}];
        int pos=func(nums,target,sum+nums[i],i+1,mp);

        int neg=func(nums,target,sum-nums[i],i+1,mp);

        return   mp[{i,sum}]= pos+neg;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        map<pair<int,int>,int>mp;
        return func(nums,target,0,0,mp);
    }
};
