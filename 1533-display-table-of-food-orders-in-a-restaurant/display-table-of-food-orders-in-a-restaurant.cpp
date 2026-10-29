class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        set<string> foods;
        set<int> tables;
        map<int, map<string, int>> mp;

        for(auto order : orders){
            int table = stoi(order[1]);
            foods.insert(order[2]);
            tables.insert(table);
            mp[table][order[2]]++;
        }

        vector<vector<string>> ans;
        vector<string> head;
        head.push_back("Table");

        for(string food : foods) head.push_back(food);

        ans.push_back(head);
        for(int table : tables){
            vector<string> row;
            row.push_back(to_string(table));
            for(string food : foods) row.push_back(to_string(mp[table][food]));
            ans.push_back(row);
        }

        return ans;
    }
};