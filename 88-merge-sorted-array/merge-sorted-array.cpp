class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m-1;
        int y=n-1;
        int end=m+n-1;
        while(x >= 0 && y >=0){
            if (nums1[x]>=nums2[y]) {
                nums1[end]=nums1[x]; end--; x--;
            }
            else {
                nums1[end]=nums2[y]; end--; y--;
            }
        }
        while(x >= 0){
            nums1[end]=nums1[x]; end--; x--;
        }
        while(y >= 0){
            nums1[end]=nums2[y]; end--; y--;
        }


    }
};