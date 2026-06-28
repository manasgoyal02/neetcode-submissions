class Solution {
public:
    string help(string s, string t){
        int i=0;
        int j=0;
        string ans;
        while(i<s.size()){
            if(s[i]==t[j]){
                ans.push_back(s[i]);
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string ans;
        ans=help(strs[0],strs[strs.size()-1]);
        return ans;
    }
};