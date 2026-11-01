
        #include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
    int minMoves(std::vector<int>& nums) {
        // Step 1: Find the minimum element in the array
        int min_value = *std::min_element(nums.begin(), nums.end());
        
        int moves = 0;
        
        // Step 2: Calculate the difference between each element and the min_value
        for (int num : nums) {
            moves += (num - min_value);
        }
        
        return moves;
    
    }
};