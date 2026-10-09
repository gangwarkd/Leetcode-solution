
class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int insertions = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                open++;
            } 
            else {
                // Check whether the next character is ')'
                if (i + 1 < s.size() && s[i + 1] == ')') {
                    i++;  // Use both ')' characters
                } 
                else {
                    insertions++;  // Insert a missing ')'
                }

                // Match this pair with an opening '('
                if (open > 0) {
                    open--;
                } 
                else {
                    insertions++;  // Insert a missing '('
                }
            }
        }

        // Each unmatched '(' needs two ')'
        return insertions + 2 * open;
    }
};