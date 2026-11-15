class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        

        unordered_map<char, int> freq;

        // Count frequency of each character in magazine
        for (char ch : magazine) {
            freq[ch]++;
        }

        // Check if ransomNote can be constructed
        for (char ch : ransomNote) {
            if (freq[ch] == 0) {
                return false;
            }
            freq[ch]--;
        }

        return true;
    
    }
};