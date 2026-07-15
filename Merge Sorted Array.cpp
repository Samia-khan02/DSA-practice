class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0 , k=0  ;
        vector<int>ans;
        while( j < m && k < n){
            if(nums1[j]<=nums2[k]){
                ans.push_back(nums1[j]);
                j++;
            }
            else{
                ans.push_back(nums2[k]);
                k++;
            }
        }
        while(  j < m){
                ans.push_back(nums1[j]);
                j++;
        }
        while(   k < n){
                ans.push_back(nums2[k]);
                k++;
        }
        for(int i = 0; i < m + n; i++) {
            nums1[i] = ans[i];
        }
        
    }
};
