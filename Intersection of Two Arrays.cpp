class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        vector<int>ans1;
        for(auto x : nums1){
            mp1[x]++;
        }
        for(auto x : nums2){
            mp2[x]++;
        }
        //checking for intersection 

        for(auto i : mp1){
            if(mp2.count(i.first)==1){
                ans1.push_back(i.first);
            }
        }
        return ans1;
    }
};
