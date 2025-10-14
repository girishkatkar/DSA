//WTF WHO THOUGHT OF THIS?
// class Solution {
// public:
//     int fib(int n) {
//         if (n <= 1)
//             return n;

//         return fib(n - 1) + fib(n - 2);
//     }
// };

class Solution {
public:

    int fibonacci(int a, int b, int n){
        if(n==2) return a+b;
        return fibonacci(b, a+b, n-1);
    }

    int fib(int n) {
        if (n>30&&n<0) return 0;
        if (n==0) return 0;
        if (n==1) return 1;
        return fibonacci(0,1,n);
    }
};