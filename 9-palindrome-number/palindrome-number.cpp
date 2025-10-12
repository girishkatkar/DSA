class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long reverse=0;
        if (x<0) return false;
        while(x>0){
            int lastdigit=x%10;
            reverse= reverse*10+lastdigit;
            x=x/10;
        }
        
    return original==reverse;}
};