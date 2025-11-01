class Solution {
public:
    void sortColors(vector<int>& nums) {
        //only three colours 0 1 and 2 
        //set a counter for all three and insert that amount into 
        //original array
        int count0=0;
        int count1=0;
        int count2=0;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]==0) count0++;
            else if (nums[i]==1) count1++;
            else count2++;
        }
        nums.clear();
        for(int i=0; i<count0; i++){
            nums.push_back(0);
        }
        for(int i=0; i<count1; i++){
            nums.push_back(1);
        }
        for(int i=0; i<count2; i++){
            nums.push_back(2);
        }
    }
};