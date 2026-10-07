#include <vector>
#include <string>
#include <unordered_set>

class Solution {
private:
    std::unordered_set<std::string> validExpressions;

    void dfs(const std::string& s, int index, int left_count, int right_count, int rem_l, int rem_r, std::string& path) {
        // Base case: reached the end of the string
        if (index == s.length()) {
            if (rem_l == 0 && rem_r == 0) {
                validExpressions.insert(path);
            }
            return;
        }

        char ch = s[index];

        // Option 1: Remove the current character (if we still need to remove this type)
        if (ch == '(' && rem_l > 0) {
            dfs(s, index + 1, left_count, right_count, rem_l - 1, rem_r, path);
        } else if (ch == ')' && rem_r > 0) {
            dfs(s, index + 1, left_count, right_count, rem_l, rem_r - 1, path);
        }

        // Option 2: Keep the current character
        path.push_back(ch);
        
        if (ch != '(' && ch != ')') {
            // It's a letter, just move forward
            dfs(s, index + 1, left_count, right_count, rem_l, rem_r, path);
        } else if (ch == '(') {
            dfs(s, index + 1, left_count + 1, right_count, rem_l, rem_r, path);
        } else if (ch == ')' && left_count > right_count) {
            // Only keep ')' if it doesn't violate validity constraints
            dfs(s, index + 1, left_count, right_count + 1, rem_l, rem_r, path);
        }

        path.pop_back(); // Backtrack
    }

public:
    std::vector<std::string> removeInvalidParentheses(std::string s) {
        int rem_left = 0;
        int rem_right = 0;

        // Step 1: Count the exact number of misplaced left and right parentheses
        for (char ch : s) {
            if (ch == '(') {
                rem_left++;
            } else if (ch == ')') {
                if (rem_left > 0) {
                    rem_left--;
                } else {
                    rem_right++;
                }
            }
        }

        validExpressions.clear();
        std::string path = "";
        
        // Step 2: Run DFS backtracking
        dfs(s, 0, 0, 0, rem_left, rem_right, path);

        // Step 3: Convert the set results back to a vector
        return std::vector<std::string>(validExpressions.begin(), validExpressions.end());
    }
};
