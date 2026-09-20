class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
   
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;

        // Traverse the array twice
        for (int i = 2 * n - 1; i >= 0; i--) {
            int index = i % n;

            // Remove elements smaller than or equal to nums[index]
            while (!st.empty() && st.top() <= nums[index]) {
                st.pop();
            }

            // For the first n positions, store the answer
            if (i < n) {
                if (!st.empty()) {
                    ans[index] = st.top();
                }
            }

            // Add current element to stack
            st.push(nums[index]);
        }

        return ans;
    
    }
};