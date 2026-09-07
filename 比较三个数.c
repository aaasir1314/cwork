#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d最大", a);
        }
        else
        {
            printf("%d最大", c);
        }
    }
    else if (a < b)
    {
        if (b > c)
        {
            printf("%d最大", b);
        }
        else
        {
            printf("%d最大", c);
        }
    }
    else
    {
        if (a == b)
        {
            if (a < c)
            {
                printf("%d最大", c);
            }
            else
            {
                printf("%d最大", a);
            }
        }
    }
    return 0;
}
