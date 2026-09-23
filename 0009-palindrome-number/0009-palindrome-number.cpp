class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x ;
        int dig ;
        long long rev ;
        if( x < 0 ){
            return false;
        }
        else{
            while ( temp > 0 ){
                dig = temp % 10;
                rev = (rev * 10 )+ dig ;
                temp = temp / 10;
            }
        }
        if( x == rev ){
            return true;
        }
        else {
            return false;
        }
    }
};