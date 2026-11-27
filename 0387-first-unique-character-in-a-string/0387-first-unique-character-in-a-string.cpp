class Solution {
public:
    int firstUniqChar(string s) {
        // int n = s.size();
        // for(int i = 0; i < n; i++) {
        //     bool found = false;
        //     for(int j = 0 ; j < n; j++) {
        //         if( i!= j && s[i] == s[j]) {
        //             found = true;
        //             break;
        //         }
        //     }
        //     if(found == false) {
        //         return i;
        //     }
        // }
        // return -1;
        unordered_map<char,int>mp;
        for( auto i : s){
            mp[i]++;
        }
        // for( int i = 0 ; i<s.size() ; i++){
        //     if ( mp[s[i]] == 1){
        //         return i;
        //     }
        // }
        int idx = 0;
        for( auto i : s){
            if( mp[i] == 1){
                return idx;
            }
            idx++;
        }
        return -1;
    }
};