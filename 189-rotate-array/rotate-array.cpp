class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(nums.size()>1){
        reverse(nums, 0, nums.size()-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.size()-1);
        }
    }

private:
void reverse(vector<int>& nums, int left, int right){
    //code for reversing
    while(left<right){
        swap(nums[left],nums[right]);
        right--;
        left++;
    }
}
};