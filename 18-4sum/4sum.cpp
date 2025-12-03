class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //using 2 for loops + 2 pointer technique
        //sort the input for 2 pointer technique
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            //[1,1,1,1] the iteration of i could be the same element
            //and thus we could be repeating the combination
            //so we will move the i until the element is not the same
            //as previous element
            if (i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1; j<n; j++){
                //same as i make sure jth element does not repeat
                //itself
                if (j>i+1 && nums[j]==nums[j-1]) continue;
                //2 pointer
                int k=j+1;
                int l=n-1;
                while(k<l){
                long long sum= nums[i];
                sum+= nums[j];
                sum+= nums[k];
                sum+= nums[l];

                if (sum==target){
                    vector<int> temp= {nums[i],nums[j],nums[k],nums[l]};
                    ans.push_back(temp);
                    //no need to sort as the array is already sorted
                    //even if k and l repeat themselves, we ignore repeatition if 
                    //the value is not = to target and we aren't inserting duplicates
                    //if the value = target then increase and decrease k and l
                    //such that they don't repeat.
                    //we also use "continue" so that i and j do not repeat
                    k++; l--;
                    while(nums[k]==nums[k-1] && k<l) k++;
                    while(nums[l]==nums[l+1] && k<l) l--;
                }

                else if (sum<target) k++;
                else l--;
                }
            }
        }
        return ans;
    }
};