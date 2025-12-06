
class Solution {
int index=-1;
private:
    void binary_search(vector<int>& nums, int target, int low, int high){
        if (low>high) return;
        int mid=(low+high)/2;
        if (nums[mid]==target) index=mid;
        else if (target<nums[mid]) binary_search(nums,target,low,mid-1);
        else binary_search(nums,target,mid+1,high);
    }
public:
    int search(vector<int>& nums, int target) {
        //recusive binary search
        int n=nums.size();
        binary_search(nums,target,0,n-1);
        return index;
    }
};