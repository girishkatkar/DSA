class Solution {
public:
    int majorityElement(vector<int>& nums) {
//Moore's Voting Algorithm
// moore's voting algo uses concept of pair wise elimination. If the question already states that majority element is more than n/2 i.e. it will be covering more than half the array, that means even if we cancel, majority element with minority one or minority element with majority one, the remaining element is 100% going to be majority one. If on any condition the last element with positive count is not majority one that means  there is no majority element in the array since if it was majority it was never supposed to be cancelled with minority.

    int element;
    int count=0;
    for(int i=0; i<nums.size(); i++){
        if (count==0) {element=nums[i]; count=1;}
        else if (element==nums[i]) count++;
        else count--;
    }
    return element;}
};

//Time Complexity: O(n)
//Space Complexity; O(1)

// BRUTE: for loops
// BETTER: hashing (nlogn or 2n), inbuilt sort(nlogn)
// OPTIMAL: Moore's voting algo