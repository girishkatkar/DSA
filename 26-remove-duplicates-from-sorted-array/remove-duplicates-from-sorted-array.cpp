class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> vec;
        vec.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            if (nums[i]!=nums[i-1]) vec.push_back(nums[i]);
        }
        for(int i=0; i<vec.size(); i++){
            nums[i]=vec[i];
        }
        
        return vec.size();
    }
};