class Solution {
public:
    int subtractProductAndSum(int n) {
        int dig,result;
        int sum=0 , pro=1;
        while(n>0){
            dig=n%10;
            sum+=dig;
            pro*=dig;
            n=n/10;
        }
        result=pro-sum;
        return result;
    }
};
