class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        //array is from [0,n]
        int sum=(n*(n+1))/2;
        for(int i=0; i<n; i++){
            sum=sum-nums[i];
        }
        return sum;
        
    }
};