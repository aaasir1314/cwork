#include <stdio.h>
int main()
{
    char c[100];
    scanf("%s", c);
    int i = 0;
    for (; c[i]; i++)
    {
        char a;
        a = c[i];
        printf("%d\n", a);
    }
    return 0;
}
