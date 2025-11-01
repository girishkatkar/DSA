class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag Algorithm
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        while(mid<=high){

            // if moving pointer encounters 0 we cannot move over it 
            // even though it is a lesser value since it will mix with
            // 1s which are already behind mid, so we'll throw the 0s
            // to another pointer 'low' which keeps distinction between
            // 0s and 1s, and we can swap between 'low' and 'mid', 
            // low will throw a 1.
            if (nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++; mid++;
            }

            //if moving pointer encounters 1, we can move over it
            // as we'll be keeping 1s before mid point
            else if (nums[mid]==1){
                mid++;
            }

            //if moving pointer encounters 2 throw it towards
            //extreme right and reduce array size
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};

// BRUTE FORCE: Merge sort
// BETTER : keeping a small hash map or three counters for 0,1 & 2
//          clear the vector using vec.clear() and push the elements
//          accordingly
// OPTIMAL : Dutch National Flag Algorithm