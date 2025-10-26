class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]!=0) {
                swap(nums[i],nums[left]);
                left++;
                //until a 0 is found in array, every iteration of i
                //will swap with itself as left and i are moving
                //together, until a 0 comes and left will be stuck
                //at that position
            }
        }

    }
};