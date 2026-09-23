// Title: Valid Parentheses
            // Difficulty: Easy
            // Language: C
            // Link: https://leetcode.com/problems/valid-parentheses/

bool isValid(char* s) {

    int length = strlen(s);
    char stack[length + 1];
    int top = -1;

    for(int i=0; i <length; i++)
    {
        char c = s[i];

        if(c == '(' || c == '{' || c == '[')
        {
            stack[++top] = c;
        }
        else
        {
            if(top == -1)
            {
                return false;
            }
            else
            {
                char open = stack[top--];
                if (!((open == '(' && c == ')') || (open == '{' && c == '}') || (open == '[' && c == ']
                '))) return false;
            }
        }
    }

    return top == -1;
}
