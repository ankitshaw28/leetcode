class Solution {
public:
    bool isPalindrome(int x) {
        long long dup = x;
        long long rev = 0;

        if(x==0) return true;
        else if(x%10 ==0 || x<0) return false;

        while(x != 0) {
            int lastDigit = x%10;
            x=x/10;
            rev = (rev*10) + lastDigit;
        }
        if(rev == dup) return true;
        else return false;
    }
};