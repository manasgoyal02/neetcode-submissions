class Solution {
public:
    int partition(vector<int>& arr,int st,int end){
        // int pivotIndex = st + rand() % (end - st + 1);
        // swap(arr[pivotIndex], arr[end]);
        int pivot=arr[end];
        int i=st-1;
        for(int j=st;j<end;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[j],arr[i]);
            }
        }
        i++;
        swap(arr[i],arr[end]);
        return i;
    }
    void Quick_sort(vector<int> &nums,int st,int end){
        if(st>=end){
            return;
        }
        int pivot=partition(nums,st,end);
        Quick_sort(nums,st,pivot-1);
        Quick_sort(nums,pivot+1,end);
    }
    bool check(vector<int>arr){
        for(int i=1;i<arr.size();i++){
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
    }
    void sortColors(vector<int>& nums) {
        bool checks=check(nums);
        if(checks){
            return;
        }
        Quick_sort(nums,0,nums.size()-1);
    }
};