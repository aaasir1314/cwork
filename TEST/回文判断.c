#include <stdio.h>
int main()
{
    char a[100000] = {0};
    scanf("%s", a);
    int len = 0;
    for (int i = 0; a[i] != 0; i++)
    {
        len++;
    }
    char b[len];
    for (int i = 0; i < len; i++)
    {
        b[i] = a[i];
    }
    char c[len];
    for (int i = 0; i < len; i++)
    {
        c[i] = b[len - i - 1];
    }
    int p = 1;
    for (int i = 0; i < len; i++)
    {
        if (b[i] != c[i])
        {
            p = 0;
            break;
        }
    }
    if (p == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
