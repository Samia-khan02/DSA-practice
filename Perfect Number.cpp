class Solution {
public:
    bool checkPerfectNumber(int num) {
        //time complexity is O(n)
        // int sum=0 , i =1;
        // while(  i < num ){
        //     if(  num % i == 0  && i!=num ){
        //         sum+=i;
        //     }
        //     i++;
        // }
        int sum=1 ; int i=2;
        while(i<=sqrt(num)){
            if( num % i == 0) {
                sum+=i;
                if(i!=num/i)
                    sum+=num/i;
            }
            i++;
        }
        if(num==1){
            return false;
        }
        else if(sum == num){
            return true;
        }
        else{
            return false;
        }
        
    }
};
