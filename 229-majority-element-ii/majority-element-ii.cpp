class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //using hash_map to update frequency and checking if
        //frequency exceeded n/3 in the same loop.
        int n=nums.size();
        int j=0;
        vector<int> ret;
        unordered_map<int,int> mpp;
        unordered_map<int,int> ans;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
            if (mpp[nums[i]]>n/3){
                if (ans.count(nums[i])) {}
                else {ans.emplace(nums[i],0);
                      ret.push_back(nums[i]);}
            }
        }
    return ret;}
};
//TC = O(n)
//SC = O(n)