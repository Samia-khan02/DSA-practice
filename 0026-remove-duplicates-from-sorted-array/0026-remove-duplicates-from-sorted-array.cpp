class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        // set<int>st;
        // int i = 0;
        // while( i<n ){
        //     st.insert( nums[i]);
        //     i++;
        // }
        // int idx = 0;
        // for (auto it : st) {
        //     nums[idx] = it;
        //     idx++;
        // }
        // return st.size();
        // OPTIMAL SOLUTION
        int i = 1;
        int j = 0;
        while( i<n ){
            if( nums[i] != nums[j]){
                nums[j+1] = nums[i];
                j++;
            }
            i++;
        }
        return j+1;
    }
};