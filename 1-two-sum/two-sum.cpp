// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans;
//         for(vector<int>::iterator it1= nums.begin(); it1!= nums.end(); it1++){
//             for(vector<int>::iterator it2= nums.begin(); it2!= nums.end(); it2++){
//                 if(*it1+*it2==target) {
//                     ans.push_back(*it1);
//                     ans.push_back(*it2);
                    

//                 }
//         }
//         }
//     return ans;}
// };

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> ans;
        
            for(int i=0; i<nums.size(); i++){
                for(int j=0; j<nums.size(); j++){
                    if(i!=j){
                    if(nums[i]+nums[j]==target){
                        ans.push_back(i);
                        ans.push_back(j);
                    } 
                        
                        
                    } 
                }
            }
    ans.erase(ans.begin()+2,ans.end());
    return ans;}
};