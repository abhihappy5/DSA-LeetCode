class Solution {
public:
    string solve(string s, int k){
        int n = s.size();
        if(n <= k) return s;
        string ans = "";
        for(int i = 0; i < n; i += k){
            int sum = 0;
            for(int j = i; j < min(i + k, n); j++) sum += s[j] - '0';
            ans += to_string(sum);
        }
        return solve(ans, k);
    }

    string digitSum(string s, int k) {
        return solve(s, k);
    }
};