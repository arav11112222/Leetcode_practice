#include <vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the array from right to left (least significant to most significant)
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] < 9) {
                digits[i]++;      // Simply increment and return if no carry-over is needed
                return digits;
            }
            digits[i] = 0;        // If it's a 9, it becomes 0 and carry moves to the next digit
        }
        
        // If the loop finished, it means all digits were 9 (e.g., 999 -> 000)
        // We need to insert a 1 at the very beginning (e.g., 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
