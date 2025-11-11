class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int count=0;
        int presum=0;
        for(int i=0; i<nums.size(); i++){
            presum=presum+nums[i];
            if (presum==k) count++;
            if (mpp.count(presum-k)) count=count+mpp[presum-k];
            mpp[presum]++;
        }
    return count;}
};