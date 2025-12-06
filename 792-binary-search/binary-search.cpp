
class Solution {
private:
    int binary_search(vector<int>& nums, int target, int low, int high){
        int index;
        if (low>high) return -1;
        int mid=(low+high)/2;
        if (nums[mid]==target) {index=mid; return index;}
        else if (target<nums[mid]) index=binary_search(nums,target,low,mid-1);
        else index=binary_search(nums,target,mid+1,high);
    return index;}
public:
    int search(vector<int>& nums, int target) {
        //recusive binary search
        int n=nums.size();
        return binary_search(nums,target,0,n-1);
    }
};