class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<long long> mpp;
                for(int k=j+1; k<n; k++){
                    long long complement= target - nums[i];
                    complement-=nums[j];
                    complement-=nums[k];
                    if (mpp.count(complement)) {
                        vector<int> temp= {nums[i],nums[j],
                                        (int)complement,nums[k]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                    mpp.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> finalans(ans.begin(),ans.end());
        return finalans;
    }
};