#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char b[50];
    scanf("%d %s", &n, b);
    int len = strlen(b);
    for (int i = 0; i < len; i++)
    {
        int t = b[i] - 'a' + 1;
        if (t + n <= 26)
        {
            b[i] = 'a' + t + n - 1;
        }
        else
        {
            b[i] = 'a' + t + n - 1 - 26;
        }
    }
    for (int x = 0; x < len; x++)
    {
        printf("%c", b[x]);
    }
    return 0;
}
