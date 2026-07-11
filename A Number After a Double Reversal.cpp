class Solution {
public:
    int reverseNum(int num) {
        int rev = 0;
        while (num > 0) {
            int dig = num % 10;
            rev = rev * 10 + dig;
            num /= 10;
        }
        return rev;
    }

    bool isSameAfterReversals(int num) {
        return reverseNum(reverseNum(num)) == num;
    }
};
