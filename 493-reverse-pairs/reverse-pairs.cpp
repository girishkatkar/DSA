class Solution {
private:
int mergesort(vector<int>& nums, int low, int high){
    int cnt=0;
    if (low>=high) return cnt;
    int mid=(low+high)/2;
    cnt+= mergesort(nums,low,mid);
    cnt+= mergesort(nums,mid+1,high);
    cnt+= merge(nums,low,mid,high);
    return cnt;
}

int merge(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    int cnt=0;
    int first=low;
    int second=mid+1;
    while(first<=mid && second<=high){
        if ((long long)nums[first]>2*(long long)nums[second]){
            cnt+= (mid-first+1);
            second++;
        }
        else if ((long long)nums[first]<=2*(long long)nums[second]){
            first++;
        }
    }
    
    while(left<=mid && right<= high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else {
            
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
            left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
            right++;
    }
    //mapping to original nums
    for(int i=low; i<=high; i++){
        nums[i]=temp[i-low];
    }
    return cnt;
}

public:
    int reversePairs(vector<int>& nums) {
        //Brute force solution: O(n^2) time limit exceeded
        //optimal solution: using mergesort technique
        int n=nums.size();
        return mergesort(nums, 0, n-1);
    }
};