class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_streak=0;
        int streak=0;
        for(int i=0; i<nums.size(); i++){
            if (nums[i]==1) {
                streak++;
            }
            else {
                if (streak>max_streak) max_streak = streak;
                streak=0;
            }
            if (streak>max_streak) max_streak = streak;
        }
        return max_streak;
    }
};