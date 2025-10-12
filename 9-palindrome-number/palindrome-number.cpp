class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long int reverse=0;
        while(x>0){
            int lastdigit=x%10;
            reverse=reverse*10+lastdigit;
            x=x/10;
        }
    if(original==reverse) return true;
    else return false;
    }
};