bool isValid(char* s) {
    char stack[1010];
    int n = -1;
    for (int i = 0; s[i] != '\0'; i++)
    {
        stack[++n] = s[i];
        if (stack[n] == ')')
        {
            n--;
            if (stack[n] == '(')
            {
                n--;
            }
            else
            {
                return false;
            }
        }
        else if (stack[n] == ']')
        {
            n--;
            if (stack[n] == '[')
            {
                n--;
            }
            else
            {
                return false;
            }
        }
        else if (stack[n] == '}')
        {
            n--;
            if (stack[n] == '{')
            {
                n--;
            }
            else
            {
                return false;
            }
        }
    }
    if (n == -1)return true;
    else return false;
}