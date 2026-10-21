class Solution {
public:
    int minOperations(string s) {
        if(is_sorted(s.begin(), s.end())) return 0;
        char mx = 'a', mn = 'z';
        for(char ch : s){
            mx = max(mx, ch);
            mn = min(mn, ch);
        }

        int n = s.size();
        if(n == 2) return -1;
        if(s[0] == mn || s[n-1] == mx) return 1;
        for(int i = 1; i < n-1; i++){
            if(s[i] == mn || s[i] == mx) return 2;
        }
        return 3;
    }
};