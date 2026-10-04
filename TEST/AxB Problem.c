#include <stdio.h>
#include <string.h>
int main()
{
    char a[2001], b[2001];
    int c[4001] = {0};
    scanf("%s", a);
    scanf("%s", b);
    int len1 = strlen(a), len2 = strlen(b);
    for (int i = len2 - 1; i >= 0; i--)
    {
        for (int j = len1 - 1; j >= 0; j--)
        {
            c[(len1 - 1 - i) + (len2 - 1 - j)] += (b[i] - '0') * (a[j] - '0');
        }
    }
    for (int i = 0; i < len1 + len2 - 1; i++)
    {
        if (c[i] >= 10)
        {
            int t = c[i];
            c[i] = t % 10;
            c[i + 1] += t / 10;
        }
    }
    int i = len1 + len2 - 1;
    while (i > 0 && c[i] == 0)
    {
        i--;
    }
    for (; i >= 0; i--)
    {
        printf("%d", c[i]);
    }
    return 0;
}
