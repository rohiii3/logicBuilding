
class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.length();
        int n = needle.length();

        // Edge case: empty needle
        if (n == 0) return 0;
        
        // If needle is longer than haystack, it can't be a substring
        if (n > m) return -1;

        // Loop only up to the point where needle can still fit
        for (int i = 0; i <= m - n; i++) {
            int j = 0;
            
            // Check if characters match
            while (j < n && haystack[i + j] == needle[j]) {
                j++;
            }

            // If we matched the entire needle length, return the start index
            if (j == n) {
                return i;
            }
        }

        return -1; // Needle not found
    }
};