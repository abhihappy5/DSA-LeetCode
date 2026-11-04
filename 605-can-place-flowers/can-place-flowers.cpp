class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int sz = flowerbed.size(), zero = 0;
        for(int i = 0; i < sz; i++){
            if(flowerbed[i] == 0){
                bool left = (i == 0) || (flowerbed[i - 1] == 0);
                bool right = (i == sz - 1) || (flowerbed[i + 1] == 0);

                if(left && right) flowerbed[i] = 1, zero++;
            }
        }

        return zero >= n;
    }
};