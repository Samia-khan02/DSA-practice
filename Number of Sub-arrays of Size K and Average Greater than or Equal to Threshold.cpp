class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int sum = 0 , count = 0;
        int low = 0;
        int high = k;
        for( int i = 0  ; i < k ; i++ ){
            sum+=arr[i];
        }
        if ( sum >= k*threshold){
            count++;
        }
        while( high < n){
            sum -= arr[low];
            sum += arr[high];
            if ( sum >= k*threshold){
                count++;
            }
            low++;
            high++;
        }
        return count;
    }
};
