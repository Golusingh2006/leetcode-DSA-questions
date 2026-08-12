class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      
        // Track the last seen index of each ASCII character
        vector<int> lastIndex(128, -1); 
        int maxLength = 0;
        int left = 0; // Left boundary of the sliding window

        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];
            
            // If the character was seen inside the current window, move left boundary
            if (lastIndex[currentChar] >= left) {
                left = lastIndex[currentChar] + 1;
            }
            
            // Record/update the current character's index
            lastIndex[currentChar] = right;
            
            // Calculate and update the maximum length found so far
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    
    }
};