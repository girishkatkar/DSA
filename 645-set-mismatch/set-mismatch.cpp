class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //optimal solution
        //using math
        //we will use the difference between the actual array and expected array
        //to get the answer. 
        // The difference between actual and expected will give us 1 equation
        //The differene between (sum of squares of array elements) of actual and 
        //expected will give us another equation

        //reminder: use long long and typecasting
        //sum actual array SN, square actual array SN2
        //sum expected array SNn, square expected array SN2n

        //SN-SNn = x-y             SN2 - SN2n = x^2 - y^2 
        //where x is repeating element and y is missing element.

        long long SN=0, SN2=0;
        //using formulas to find expected values
        long long n= nums.size();
        long long SNn= (n*(n+1))/2;
        long long SN2n= (n*(n+1)*(2*n+1))/6;
        //using for loop to find expected values
        for(int i=0; i<n; i++){
            SN+=nums[i];
            SN2+=nums[i]*nums[i];
        }

        //SN - SNn = x - y;
        long long val1= SN - SNn; // x - y
        long long val2= SN2 - SN2n; //val2 = x^2 - y^2 = (x+y)(x-y)
        val2=val2/val1; //val2 is currently storing x+y 
        //since we have val1= x-y and val2= x+y
        //add both
        //val1+val2=  2x
        long long x= (val1+val2) / 2;
        //x-y= val1, x-val1= y
        long long y= x - val1;
    //type cast it to int since we want to return an integer value
    return {(int)x, (int)y};}
};