class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        int n1 = items1.size(), n2 = items2.size();
        for(int i = 0; i < n1; i++){
            mp[items1[i][0]] = items1[i][1];
        }
        for(int i = 0; i < n2; i++){
            // if(mp[items2[i][0]])
            mp[items2[i][0]] += items2[i][1];
            // else mp[items2[i][0]] = items2[i][0];
        }

        vector<vector<int>> ans;
        for(auto m : mp){
            ans.push_back({m.first, m.second});
        }

        return ans;
    }
};