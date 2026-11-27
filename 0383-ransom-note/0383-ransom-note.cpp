class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char,int>mp;
    //     for( auto i : magazine ){
    //         mp[i]++;
    //     }
    //     for( auto j:  ransomNote){
    //         mp[j]--;
    //         if(mp[j]  <  0){
    //             return false;
    //         }
    //     }
    // return true;
    // }
        for(auto i : ransomNote){
            mp[i]++;
        }
        for(auto j : magazine){
            if(mp[j] > 0){
                mp[j]--;
            }
        }
        for(auto it : mp){
            if(it.second > 0){
                return false;
            }
        }
        return true;
    }
};