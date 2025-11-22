class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> st;
        
        int n=nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                set<long long> hashset;
                for(int k=j+1; k<n; k++){
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k];
                    long long complement=target-sum;
                    if (hashset.count(complement)){
                vector<int> temp={nums[i],nums[j],(int)complement,nums[k]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
    }
};