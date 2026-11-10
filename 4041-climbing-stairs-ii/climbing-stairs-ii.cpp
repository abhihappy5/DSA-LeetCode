class Solution {
public:
    int solve(int i , int n, vector<int>& costs){
        if(i == n) return 0;
        int p1 = INT_MAX, p2 = INT_MAX, p3 = INT_MAX;

        if(i + 1 <= n) p1 = 1 + costs[i] + solve(i + 1, n, costs);
        if(i + 2 <= n) p2 = 4 + costs[i + 1] + solve(i + 2, n, costs);
        if(i + 3 <= n) p3 = 9 + costs[i + 2] + solve(i + 3, n, costs);

        return min({p1, p2, p3});
    }

    int solveMem(int i , int n, vector<int>& costs, vector<int>& dp){
        if(i == n) return 0;
        if(dp[i] != -1) return dp[i];
        int p1 = INT_MAX, p2 = INT_MAX, p3 = INT_MAX;

        if(i + 1 <= n) p1 = 1 + costs[i] + solveMem(i + 1, n, costs, dp);
        if(i + 2 <= n) p2 = 4 + costs[i + 1] + solveMem(i + 2, n, costs, dp);
        if(i + 3 <= n) p3 = 9 + costs[i + 2] + solveMem(i + 3, n, costs, dp);

        return dp[i] = min({p1, p2, p3});
    }

    int solveTab(int n, vector<int>& costs){
        vector<int> dp(n+1, INT_MAX);
        dp[0] = 0;

        for(int i = 1; i <= n; i++){
            dp[i] = dp[i - 1] + 1 + costs[i - 1];
            if(i >= 2) dp[i] = min(dp[i], dp[i - 2] + 4 + costs[i - 1]);
            if(i >= 3) dp[i] = min(dp[i], dp[i - 3] + 9 + costs[i - 1]);
        }
        
        return dp[n];
    }

    int climbStairs(int n, vector<int>& costs) {
        // return solve(0, n, costs);

        // vector<int> dp(n+1, -1);
        // return solveMem(0, n, costs, dp);

        return solveTab(n, costs);
    }
};