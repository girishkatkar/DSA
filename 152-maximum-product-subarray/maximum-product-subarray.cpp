class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //brute force solution
        //generate all the subarrays
        int maxproduct=1;
        int n=nums.size();
        if (n==1) return nums[0];
        for(int i=0; i<n; i++){
            int product=1;
            for(int j=i; j<n; j++){
                product=product*nums[j];
                if (i==0 && j==0) maxproduct=product;
                else maxproduct=max(maxproduct,product);
            }
        }
    return maxproduct;}
};