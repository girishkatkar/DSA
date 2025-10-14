class Solution {
public:
    int fib(int n) {
        if (n>30&&n<0) return 0;
        int fibonacci1=0;
        int fibonacci2=1;
        if (n==0) return 0;
        if (n==1) return 1;
        for(int i=1; i<=n-2; i++){
            int temp= fibonacci2;
            fibonacci2=fibonacci1+fibonacci2;
            fibonacci1=temp;
        }

        
    return fibonacci1+fibonacci2;}
};