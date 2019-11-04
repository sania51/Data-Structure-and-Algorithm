#include<bits/stdc++.h>
using namespace std;
char str[10000];
char c[10000];
char d[10000];
char *replaceWord( char *s,  char *oldW,char *newW)
{
    char *result;
    int i, cnt = 0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;
            i += oldWlen - 1;
        }
    }

    result = (char *)malloc(i + cnt * (newWlen - oldWlen) + 1);

    i = 0;
    while (*s)
    {
        if (strstr(s, oldW) == s)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    return result;
}

int main()
{
    cout << "Enter the string : ";
    gets(str);
    cout << "Enter the word you want to update : ";
    gets(c);
    cout << "Enter the word you want to update with : ";
    gets(d);
    char *result = NULL;
    printf("\nOld string: %s\n", str);

    result = replaceWord(str, c, d);
    printf("\nNew String: %s\n", result);

    free(result);
    return 0;
}

