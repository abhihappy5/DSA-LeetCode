class Solution {
public:
    const int MOD = 1e9 + 7;
    int numOfSubarrays(vector<int>& arr) {       
        // int n = arr.size(), ans = 0;

        // for(int i = 0; i < n; i++){
        //     int sum = 0;
        //     for(int j = i; j < n; j++){
        //         sum += arr[j];
        //         if(sum & 1) ans++;
        //     }
        // }

        // return ans % MOD;


        int ans = 0, pref = 0;
        int evenCnt = 1, oddCnt = 0;
        for(int num : arr){
            pref += num;
            if(pref & 1) ans += evenCnt, oddCnt++;
            else ans += oddCnt, evenCnt++;
            ans %= MOD;
        }

        return ans;
    }
};