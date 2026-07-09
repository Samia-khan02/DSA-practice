class Solution {
public:
    int countDigits(int num) {
        int dig ;
        int temp=num;
        int count=0;

        while(temp>0){
            dig=temp%10;
            if(  num%dig==0  && dig!=1 ){
                count+=1;
            }
            if(  dig==1){
                count+=1;
            }
            temp=temp/10;
        }
    return count;
    }
};
