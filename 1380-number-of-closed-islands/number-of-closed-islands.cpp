class Solution {
public:
    bool dfs(int x, int y, vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        if(x < 0 || x >= m || y < 0 || y >= n) return false;
        if(grid[x][y] == 1) return true;
        grid[x][y] = 1;

        return dfs(x+1, y, grid) & dfs(x-1, y, grid) & dfs(x, y+1, grid) & dfs(x, y-1, grid);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0) ans += dfs(i, j, grid);
            }
        }

        return ans;
    }
};