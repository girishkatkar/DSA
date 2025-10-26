class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //for bruteforce lets try making a copy
        int n=nums.size();
        vector<int> vec(n,0);
        int pointer=0;
        for(int i=0; i<n; i++){
            if (nums[i]!=0) {
                vec[pointer]=nums[i];
                pointer++;}

        }
        for(int i=0; i<n; i++){
            nums[i]=vec[i];
        }
    }
};