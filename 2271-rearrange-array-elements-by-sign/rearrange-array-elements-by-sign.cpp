class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]<0) negative.push_back(nums[i]);
            else positive.push_back(nums[i]);
        }
        int k=0;
        for(int i=0; i<nums.size(); i=i+2){
            nums[i]=positive[k]; k++;
        }
        int j=0;
        for(int i=1; i<nums.size(); i=i+2){
            nums[i]=negative[j]; j++;
        }
    return nums;}
};