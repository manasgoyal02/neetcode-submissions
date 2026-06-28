class Solution {
public:
    bool check(string &s, int i,int j){
        if(i>=j) return true;

        if(s[i]!=s[j]) return false;

        return check(s,i+1,j-1);
    }
    string longestPalindrome(string s) {
        int length=0;
        string ans;
        for(int i=0;i<s.size();i++){
            string s1;
            for(int j=i;j<s.size();j++){
                s1=s1+s[j];
                if(check(s1,0,s1.size()-1)){
                    int len=j-i+1;
                    if(length<len){
                        length=len;
                        ans=s1;
                    }
                }
            }
        }
        return ans;
    }
};
