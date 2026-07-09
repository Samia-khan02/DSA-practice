class Solution {
public:
    long long sumAndMultiply(int n) {
        long long rev=0;
        long long ans=0;
        int dig,sum=0;

        while(n>0){
            dig=n%10;
            if(dig !=0){
                rev=rev*10+ dig;
                sum+=dig;
            }
            n=n/10;
        }
        while(rev>0){
            dig=rev%10;
            ans=ans*10+dig;
            rev=rev/10;
        }
    return ans*sum;

    }

};
