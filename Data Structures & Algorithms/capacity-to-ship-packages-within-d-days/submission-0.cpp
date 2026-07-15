class Solution {
public:
    bool check(vector<int>&weights,int days,int cap){
        int daysused=1;
        int current=0;
        for(int i=0;i<weights.size();i++){
            if(current+weights[i]<=cap){
                current+=weights[i];
            }
            else{
                daysused++;
                current=weights[i];
            }
        }
        return daysused<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int ans=INT_MAX;
        int range=0;
        int el=INT_MIN;
        for(int i=0;i<weights.size();i++){
            range+=weights[i];
            el=max(el,weights[i]);
        }

        int l=el;
        int h=range;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(check(weights,days,mid)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};