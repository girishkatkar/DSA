class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //for the optimal solution
        //we need to look for quick existence check like x+1 
        //within O(1) for that we can use unordered_set

        unordered_set<int> mpp;
        for(int i=0; i<nums.size(); i++){ //O(n)
            mpp.insert(nums[i]);
        }

        //everything is stored randomly within unordered_set
        //we can iterate through it and do quick lookups O(1)
        int cnt=1;
        int maxcnt=0;
        for(auto it: mpp){
            if (mpp.count(it-1)) {}
            else {
                while(mpp.count(it+cnt)) {
                    cnt++;
                }
                maxcnt=max(cnt,maxcnt);
                cnt=1;
            }
            

            }
            return maxcnt;
        }
    
};