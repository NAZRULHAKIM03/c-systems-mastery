// Title: Valid Palindrome
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/valid-palindrome/

bool isPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if(isalnum(s[left]) && isalnum(s[right]))
        {
            if(tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }

        left++;
        right--;
        }

        if (!isalnum(s[left]))
        {
            left++;
        }
        
        if (!isalnum(s[right]))
        {
            right--;
        }
    }

    return true;
}
