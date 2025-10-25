class Solution {
public:
    bool check(vector<int>& nums) {
        //if the input array is sorted and rotated, then the
        //maximum dip in value it can have in increasing value is 1
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]<=nums[(i+1)%nums.size()]) {}
            else {count++;}
        }
        if (count<=1) return true;
        else return false;
    }
};