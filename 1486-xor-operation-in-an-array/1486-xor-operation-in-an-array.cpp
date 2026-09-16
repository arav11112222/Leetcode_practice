class Solution {
public:
    int xorOperation(int n, int start) {
        int xorResult = 0;
        
        // Loop through 'n' elements to compute start + 2 * i
        for (int i = 0; i < n; i++) {
            xorResult ^= (start + 2 * i);
        }
        
        return xorResult;
    }
};
