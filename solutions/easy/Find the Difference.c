// Title: Find the Difference
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/find-the-difference/

char findTheDifference(char* s, char* t) {
  char *s_ptr = s;
  char *t_ptr = t;
  char output = '\0';

  while(*s_ptr != '\0')
  {
    output ^= *t_ptr;
    output ^= *s_ptr;
    s_ptr++;
    t_ptr++;
  }

  output ^= *t_ptr;

  return output;
}
