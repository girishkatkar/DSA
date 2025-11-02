class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> vec=nums;
        int k=0;
        int j=1;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]>=0) {vec[k]=nums[i]; k=k+2;}
            else {vec[j]=nums[i]; j=j+2;}
        }
    return vec;}
};