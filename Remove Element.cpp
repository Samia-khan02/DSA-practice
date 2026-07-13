class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=0;
        int n=nums.size();
        for( int i = 0 ; i < n ; i ++ ){
            if( val != nums[i]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};
