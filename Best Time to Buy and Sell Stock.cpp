class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = INT_MAX;
        int n = prices.size();
        int pro = 0;
        int ans = 0;
        int i = 0;
         
         for ( int i = 0 ; i < n ; i++){
            low = min ( low , prices [i]);
            ans = max(ans, prices[i] - low);
         }
    return ans;

    }
};
