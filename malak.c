#include <stdio.h>
#include <string.h>
char    *ftt_strchr(char *s, int c)
{
    int    i;

    if (!s)
        return (NULL);
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
        {
            return ((char *)(s + i));
        }
        i++;
    }
    if (c == '\0')
        return ((char *)(s + i));
    return (0);
}
int main()
{
   // char str[] = "Malak";
    printf("%s\n",strchr(NULL,'a'));
    return (0);
}