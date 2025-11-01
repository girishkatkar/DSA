class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        //frequency map created
        //iterate through the mpp
        int maxfreq=0;
        int maxelement;
        for(auto it: mpp){
            if (it.second>maxfreq) {maxfreq=it.second;
            maxelement=it.first;}
        }
    return maxelement;}
};