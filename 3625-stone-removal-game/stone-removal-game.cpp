class Solution {
public:
    bool canAliceWin(int n) {
        int remove = 10;
        bool aliceTurn = true;
        while (remove > 0) {
            if (n < remove)
                return !aliceTurn; 
            n -= remove;
            remove--;
            aliceTurn = !aliceTurn;
        }
        return false; 
    }
};