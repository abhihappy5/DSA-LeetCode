class Solution {
public:
    int magicalString(int n) {
        if(n <= 3) return 1;
        string s = "122";
        int i = 2;
        char ch = '1';
        while(s.size() < n){
            int x = s[i] - '0';
            for(int j = 0; j < x && s.size() < n; j++) s += ch;
            if(ch == '1') ch = '2';
            else ch = '1';
            i++;
        }
        int ans = 0;
        for(char c : s){
            if(c == '1') ans++;
        }

        return ans;
    }
};