#include <stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);
    if (a % b == 0)
    {
        printf("a/b=%d", a / b);
    }
    else
    {
        printf("a/b=%d...%d", a / b, a % b);
    }
    return 0;
}
