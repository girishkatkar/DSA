class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //handle empty cases
        if(nums.size()==0) return 0;
        int pointer=1;
        for (int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]) {
                nums[pointer]=nums[i];
                pointer++;
            }
        }
    return pointer;}
};