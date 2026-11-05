class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n1 = arr1.size(), n2 = arr2.size(), ans = 0;
        for(int i = 0; i < n1; i++){
            bool ok = true;
            for(int j = 0; j < n2; j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    ok = false;
                    break;
                }
            }
            if(ok) ans++;
        }

        return ans;
    }
};