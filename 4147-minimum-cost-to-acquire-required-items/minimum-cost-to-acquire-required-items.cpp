typedef long long ll;
class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        ll ans = 0;
        if(costBoth <= cost1 + cost2){
            int mn = min(need1, need2);
            cost1 = min(cost1, costBoth), cost2 = min(cost2, costBoth);
            ans += (1LL * mn * costBoth);
            need1 -= mn, need2 -= mn;
            ans += (1LL * need1 * cost1), ans += (1LL * need2 * cost2);
            return ans;
        }

        return (1LL * need1 * cost1) + (1LL * need2 * cost2);
    }
};