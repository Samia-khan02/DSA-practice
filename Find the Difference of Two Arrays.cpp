class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int>ans1;
        vector<int>ans2;
        for(auto x : nums1){
            mp1[x]++;
        }
        for(auto x : nums2){
            mp2[x]++;
        }
        for( auto i: mp1){
            if(mp2.count(i.first)==0){
                ans1.push_back(i.first);
            }
        }
        for( auto j : mp2){
            if(mp1.count(j.first)==0){
                ans2.push_back(j.first);
            }
        }
    return{ans1,ans2};
    }
};
