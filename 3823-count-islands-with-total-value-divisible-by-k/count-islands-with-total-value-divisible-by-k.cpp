class Solution {
public:
    long long dfs(int x, int y, vector<vector<int>>& grid){
        int m = grid.size(), n = grid[0].size();
        if(x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == 0) return 0;
        long long sum = grid[x][y];
        grid[x][y] = 0;
        sum += dfs(x+1, y, grid) + dfs(x-1, y, grid) + dfs(x, y+1, grid) + dfs(x, y-1, grid);
        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] > 0) ans += (dfs(i, j, grid) % k == 0 ? 1 : 0);
            }
        }

        return ans;
    }
};