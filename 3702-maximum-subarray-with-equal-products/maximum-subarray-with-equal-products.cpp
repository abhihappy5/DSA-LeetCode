class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for(int i = 0; i < n; i++){
            int p = nums[i], g = nums[i], l = nums[i];
            for(int j = i + 1; j < n; j++){
                p = p * nums[j], g = gcd(g, nums[j]), l = lcm(l, nums[j]);
                if(p > l * g) break;
                if(p == l * g) ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};