class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return 1;
        sort(nums.begin(),nums.end());
        
        int cnt=1;
        int max_cnt=INT_MIN;
        int curr=nums[0];
        int flag=0;
        for(int i=1; i<nums.size(); i++){
            if (nums[i]==curr) {}
            else if(nums[i]==curr+1) {
                cnt++;
                curr=nums[i];
                max_cnt= max(cnt,max_cnt);
                flag=1;
            }
            else {
                max_cnt= max(cnt,max_cnt);
                cnt=1;
                curr=nums[i];
                flag=1;
            }
        }
        if (flag==0) return 1;
        return max_cnt;
       
    }
};