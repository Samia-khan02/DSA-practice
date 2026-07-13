class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int dig, temp = x;

        if (x < 0)
            return false;

        while (temp > 0) {
            dig = temp % 10;
            rev = rev * 10 + dig;
            temp /= 10;
        }

        return rev == x;
    }
};
