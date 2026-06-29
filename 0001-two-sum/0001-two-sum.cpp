class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> mpp;
        for(int i=0; i<n; i++) {
            int first = nums[i];
            int moreNeeded = target - first;
            if(mpp.find(moreNeeded) != mpp.end()) {
                return {mpp[moreNeeded], i};
            }
            mpp[first] = i;
        }
        return {-1,-1};
    }
};