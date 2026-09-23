class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = k;
        double sum = 0;
        double res;
        for ( int i = 0 ; i<k ; i++ ){
            sum += nums[i];
        }
        res = sum/k;
        while ( high < n ){
            sum -= nums [low];
            sum += nums[high];
            res = max( res , sum/k);
            low++;
            high++;
        }
    return res;
    }
};