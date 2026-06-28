class Solution {
public:
    bool isPalindrome(string s) {
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]!=' ' && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))){
                ans.push_back(s[i]);
            }
        }
        int i=0;
        int j=ans.size()-1;
        while(i<=j){
            if(ans[i]!=ans[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
