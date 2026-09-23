class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int res;
        int count = 0;
        int low = 0;
        int high = k;
        for( int i = 0; i<k ; i++ ){
            if( s[i] =='a' ||s[i] =='e' || s[i] =='i' ||  s[i] =='o'
            || s[i] =='u'){
                count++;
            }
        }
        res = count;
        while ( high < n ){
            if( s[low] =='a' ||s[low] =='e' || s[low] =='i' ||  s[low] =='o'
            || s[low] =='u'){
                count--;
            }
            low++;
            if( s[high] =='a' ||s[high] =='e' || s[high] =='i' ||  
            s[high] =='o' || s[high] =='u'){
                count++;
            }
            high++;
            res = max( res , count);
        }
    return res;
    }
};