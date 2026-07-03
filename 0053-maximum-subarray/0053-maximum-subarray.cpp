class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        long long maxi = LONG_MIN;
        long long sum  = 0;
        for(int i = 0; i<n; i++) {
            sum = sum + nums[i];
            if(sum > maxi) {
                maxi = sum;
            }
            if(sum < 0) {
                sum = 0;
            }
        }
        // if there is no sum > 0 and we have to return an empty array with 0 output 
        /*if(maxi < 0) {
            maxi = 0;
        }*/
        return maxi;
    }
};