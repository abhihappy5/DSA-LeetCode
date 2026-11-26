class Solution {
public:
    bool canAliceWin(int n) {
        int stone = 10;
        bool alice = false;
        while(n >= stone){
           n -= stone;
           stone--;
           alice = !alice;
        }
        return alice;
    }
};