#include <vector>
#include <numeric>
#include <algorithm>

// class Solution {
// public:
//     long long minMoves(std::vector<int>& nums) {
//         if (nums.empty()) return 0;
        
//         // Find the maximum element in the array
//         long long max_val = *std::max_element(nums.begin(), nums.end());
        
//         long long total_moves = 0;
//         for (int num : nums) {
//             total_moves += (max_val - num);
//         }
        
//         return total_moves;
//     }
// };


class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            ans += abs(nums[i] - mx);
        }

        return ans;
    }
};
