class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int idx = 0, tot = 0, curr = 0;
        for(int i = 0; i < gas.size(); i++){
            int gain = gas[i] - cost[i];
            tot += gain, curr += gain;
            if(curr < 0) curr = 0, idx = i + 1;
        }

        return tot < 0 ? -1 : idx;
    }
};