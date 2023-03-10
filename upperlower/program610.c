#include <stdio.h>
#include <string.h>
// #include <ctype.h>
int main()
{
    char s[100];
    scanf("%[^\n]%*c", &s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (isupper(s[i]))
        {
            s[i] = tolower(s[i]);
        }
        else
        {
            s[i] = toupper(s[i]);
        }
    }
    printf("%s", s);
    return 0;
}