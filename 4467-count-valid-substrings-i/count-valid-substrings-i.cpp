class Solution {
public:
    long long countValidSubstrings(string s) {
        long long ans = 0;
        int l = 0;
        for(int r = 0; r < s.size(); r++){
            while (r - l >= 2 &&
                   s[r - 2] == 'a' && s[r - 1] == 'b' && s[r] == 'c') l++;

            ans += r - l + 1;
        }

        return ans;
    }
};