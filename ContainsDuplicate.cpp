class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        if(s.size() !=t.size()){
            return false;
        }
        for( auto i : s  ){
                mp1[i]++;
        }
        for( auto j : t  ){
                mp2[j]++;
        }
        return(mp1==mp2);
   
    }
};
