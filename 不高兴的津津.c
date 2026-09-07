#include <stdio.h>
int main()
{
    int sum = 0;
    int i = 1;
    int j = 0;
    for (; i < 8; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        if (a + b > sum && a + b > 8)
        {
            sum = a + b;
            j = i;
        }
    }
    printf("%d", j);

    return 0;
}
