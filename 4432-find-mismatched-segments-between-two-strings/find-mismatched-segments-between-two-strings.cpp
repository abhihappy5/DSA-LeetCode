class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> res;
        int n = s1.size(), i = 0;
        while(i < n){
            if(s1[i] == s2[i]){
                i++;
                continue;
            }

            string s, t;
            while(i < n && s1[i] != s2[i]) s += s1[i], t += s2[i], i++;

            res.push_back({s, t});
        }

        return res;
    }
};