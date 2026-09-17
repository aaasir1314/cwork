#include <stdio.h>
int main()
{
    int n, x;
    int i = 1;
    int sum = 0;
    int y = 1, m = 0;
    scanf("%d %d", &n, &x);
    for (; i <= n; i++)
    {
        y = i;
        for (; y != 0;)
        {
            m = y % 10;
            if (m == x)
            {
                sum++;
            }
            y = y / 10;
        }
    }
    printf("%d", sum);

    return 0;
}
