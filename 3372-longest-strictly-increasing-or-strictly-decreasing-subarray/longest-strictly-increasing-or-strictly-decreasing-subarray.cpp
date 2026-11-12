class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size(), ans = 1;
        for(int i = 0; i < n; i++){
            int inc = 1;
            for(int j = i + 1; j < n; j++) {
                if(nums[j] > nums[j - 1]) inc++, ans = max(ans, inc);
                else break;
            }
        }
        for(int i = 0; i < n; i++) {
            int dec = 1;
            for(int j = i + 1; j < n; j++) {
                if(nums[j] < nums[j - 1]) dec++, ans = max(ans, dec);
                else break;
            }
        }

        return ans;
    }
};