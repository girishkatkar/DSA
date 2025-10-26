class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotatednums=nums;
        for(int i=0; i<nums.size(); i++){
            rotatednums[(i+k)%nums.size()]=nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            nums[i]=rotatednums[i];
        }
        

    }
};