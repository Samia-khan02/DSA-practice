class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int low = 0 ;
        int high = 0;
        int res =0 ;
        while ( high < n ){
            int i = low;
            while ( i< high ){
                if( s[i] == s[high]){
                     low = i+1;
                     break;
                }
                i++;
            }
            int len = (high - low +1 );
            res = max( len ,res );
            high++;
        }
    return res;
    }
};