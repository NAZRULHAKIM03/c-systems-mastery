// Title: Reverse String
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/reverse-string/

void reverseString(char* s, int sSize) {

    int last = sSize-1;
    char temp = 0;

    for (int i=0; i<last; i++)
    {
        s[i] = s[last];
    }
        s[last] = temp;
        temp = s[i];
        last--;
}
