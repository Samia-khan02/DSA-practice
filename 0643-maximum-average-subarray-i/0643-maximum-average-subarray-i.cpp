class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double sum = 0;
        double avg ,res;
        int low = 0;
        int high = k  ;
        for ( int i = 0 ; i < k ; i++ ){
            sum += nums[i];
        }
        avg = sum/k;
        res = avg;
        while ( high < n ){
            sum = sum - nums[low];
            sum = sum + nums[high];
            avg = sum/k;
            res = max ( avg ,res );
            low ++;
            high++;
        }
        return res;
    }
};