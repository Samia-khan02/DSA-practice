class Solution {
public:
    void reverseString(vector<char>& s) {
    // TWO POINTER
        // int left = 0 , 
        // right = s.size()-1 ;
        // while( left < right ){
        //     swap( s[left] , s[right]);
        //     left++;
        //     right--;
        // }
    // SINGLE POINTER
        int i = 0 ;
        int n = s.size();
        while ( i < n/2){
            swap( s[i] , s[n-i-1] );
            i++;
        }
    }
};