#include <stdio.h>

int main()
{
    char m[7] = {0}; // 彗星
    char n[7] = {0}; // 队伍
    scanf("%s %s", m, n);
    for (int i = 0; m[i] != '\0'; i++)
    {
        m[i] = m[i] - 'A' + 1;
    }
    for (int i = 0; n[i] != '\0'; i++)
    {
        n[i] = n[i] - 'A' + 1;
    }

    int a = 1, b = 1;
    for (int i = 0; m[i] != '\0'; i++)
    {
        a *= m[i];
    }
    for (int i = 0; n[i] != '\0'; i++)
    {
        b *= n[i];
    }
    if (a % 47 == b % 47)
    {
        printf("GO");
    }
    else
    {
        printf("STAY");
    }
    return 0;
}
