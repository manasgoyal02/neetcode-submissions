class Solution {
public:
    int partition(vector<int>& arr,int st,int end){
        int pivot=arr[end];
        int i=st-1;
        for(int j=st;j<arr.size();j++){
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
    vector<int> sortArray(vector<int>& nums) {
        Quick_sort(nums,0,nums.size()-1);
        return nums;
    }
};