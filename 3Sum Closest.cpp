//        APPROACH 1
//class Solution {
// public:
//     int threeSumClosest(vector<int>& nums, int target) {
//         int ans , diff;
//         int best = INT_MAX;
//         int n = nums.size();
//         sort( nums.begin() , nums.end());
//         for ( int i = 0 ; i < n-2 ; i++ ){
//             int j = i+1;
//             int k = n-1;
//             while ( j < k){
//                 int sum = nums[i] + nums[j] + nums[k];

//                 if ( sum  == target){
//                     return sum;
//                 }
//                 else if ( sum < target ){
//                     diff = abs (target - sum);
//                     if (diff < best){
//                     best = diff;
//                     ans = sum;}                    
//                     j++;
//                 }  
//                 else {
//                     diff = abs (target - sum);
//                     if (diff < best){
//                     best = diff;
//                     ans = sum;}   
//                     k--;
                    
//                 }
            
//             }
//         }
//     return ans;
//     }
// };
//               APPROACH 2 :
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++) {
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                }

                if (sum < target) {
                    j++;
                }
                else if (sum > target) {
                    k--;
                }
                else {
                    return sum;
                }
            }
        }

        return ans;
    }
};
