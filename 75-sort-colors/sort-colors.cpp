class Solution {
public:
    void sortColors(vector<int>& nums) {
        //so the problem involves sorting without sort fucntion
        //selection, bubble, merge, quick
        //usin merge sort
        
        mergesort(nums, 0, nums.size()-1);
        
    }
private:
    void mergesort(vector<int>& arr, int left, int right){
        if (left>=right) return;
        int mid=(left+right)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }

    void merge(vector<int>& arr, int left, int mid, int right){
        vector<int> temp;
        int i=left;
        int j=mid+1;

        while(i<=mid && j<=right){
            if (arr[i]<=arr[j]) {
                temp.push_back(arr[i]);
                i++;
            }
            else {
                temp.push_back(arr[j]);
                j++;
            }}
            while(i<=mid){
                temp.push_back(arr[i]);
                i++;
            }
            while(j<=right){
                temp.push_back(arr[j]);
                j++;
            }
            //mapping
            for(int i=0; i<temp.size(); i++){
                arr[left+i]=temp[i];
            }
        
    }
};