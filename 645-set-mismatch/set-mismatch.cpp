class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //better solution
        //using hashmap
        int n=nums.size();
        vector<int> hashmap(n+1,0);
        for(int i=0; i<n; i++){
            hashmap[nums[i]]++;
        }

        int repeating;
        int missing;
        for(int i=1; i<=n; i++){
            if (hashmap[i]==2) repeating=i;
            if (hashmap[i]==0) missing=i;
        }
    return {repeating,missing};}
};