class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //brute force solution
        int repeating;
        int missing;
        for(int i=1; i<=nums.size(); i++){
            int count=0;
            for(int j=0; j<nums.size(); j++){
                if (nums[j]==i) count++;
            }
            if (count==2) repeating=i;
            if (count==0) missing=i;
        }
    return {repeating,missing};}
};