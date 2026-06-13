class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp1;
        for( auto i : magazine ){
            mp1[i]++;
        }
        for( auto j:  ransomNote){
            mp1[j]--;
            if(mp1[j]  <  0){
                return false;
            }
        }
    return true;
    }
};
