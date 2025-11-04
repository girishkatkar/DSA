class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //iterate in the array from right to left to find a breaking
        //point where the i is smaller than i+1.
        int index=-1;
        for(int i=nums.size()-2; i>=0; i--){
            if (nums[i]<nums[i+1]) {
                index=i;
                break;
            }
        }

        //if there is no such breakpoint that means the permutation
        //is highest in lexicographical order and its next array
        //shoud be the first and smallest, so just reverse it
        if (index==-1) {
            reverse(nums.begin(),nums.end());
            return;
        }

        //found index which is smaller, then iterate from the right
        //again to find a element which is greater than index value
        //to swap with.
        else {
            for(int i=nums.size()-1; i>index; i--){
                if (nums[i]>nums[index]) {
                    swap(nums[i],nums[index]);
                    break;
                }
            }

            //now that we have swapped the index placing a value at
            //that index which is just greater than its previous value
            //we want the remaining further array in sorted order
            //because we want that to be the smallest number but 
            //instead of swapping we could just reverse it since the 
            //further array was in decreasing order.
            index+=1;
            reverse(nums.begin()+index, nums.end());
        }
    }
};