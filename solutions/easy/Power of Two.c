// Title: Power of Two
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/power-of-two/

bool isPowerOfTwo(int n) {

    return n > 0 && (n & (n-1)) == 0;
    
}
