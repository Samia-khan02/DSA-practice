class Solution {
public:
/* APPROACH 1:
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
}; */

//APPROACH 2
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector < int > ans(n);
        int j = n -1;
        int k = n -1;
        int i =0 ;

        while ( i < = j){
            if( (abs(nums[i])) >= (abs(nums[j])) ){
                ans[k] = nums [i] * nums [i];
                i++;
            }
            else{
                ans[k]= nums[j] * nums[j];
                j--;
            }
            k--;
        }
        return ans;

    }
};
