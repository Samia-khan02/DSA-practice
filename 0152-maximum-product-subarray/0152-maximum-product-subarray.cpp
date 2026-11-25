class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minending = nums[0];
        int bestending = nums[0];
        int ans = nums[0];
        for( int i = 1 ; i<nums.size() ; i++){
            int v1 = minending * nums[i];
            int v2 = bestending *nums[i];
            int v3 = nums[i];
            bestending = max( v3 , max( v1,v2) );
            minending = min( v3 , min( v1,v2) );
            ans = max(  ans , max( bestending , minending));
        }
        return ans;
    }
};