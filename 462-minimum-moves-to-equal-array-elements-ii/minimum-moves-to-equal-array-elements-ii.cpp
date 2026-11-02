class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        sort(nums.begin(), nums.end());
        int md = nums[(n - 1) / 2];
        for(int num : nums) ans += abs(num - md);

        return ans;
    }
};