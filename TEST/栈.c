#include <stdio.h>

int c(int a)
{
    if (a == 0)
    {
        return 1;
    }
    if (a == 1)
    {
        return 1;
    }
    else if (a == 2)
    {
        return 2;
    }
    else if (a == 3)
    {
        return 5;
    }
    else
    {
        int k = 0;
        for (int i = 0; i < a; i++)
        {

            k += c(i) * c(a - i - 1);
        }
        return k;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", c(n));

    return 0;
}
