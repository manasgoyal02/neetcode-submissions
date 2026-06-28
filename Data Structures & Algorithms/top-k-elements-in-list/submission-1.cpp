class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<pair<int,int>> ans1;
        for(auto it:map){
           ans1.push_back({it.second,it.first});
        }
        sort(ans1.begin(),ans1.end(),greater<pair<int,int>>());
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(ans1[i].second);
        }
        return ans;
    }
};
