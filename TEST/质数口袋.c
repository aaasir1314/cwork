#include <stdio.h>
// 判断质数
int f(int n)
{
    int flat = 1;
    for (int a = 2; a < n; a++)
    {
        if (n % a == 0)
        {
            flat = 0;
        }
    }
    if (flat == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int L;
    scanf("%d", &L);
    int sum = 0;
    int count = 0;
    int i = 2;
    for (; sum <= L; i++)
    {
        if (f(i))
        {
            if (sum + i > L)
            {
                break;
            }
            printf("%d\n", i);
            sum += i;
            count++;
        }
    } 
    printf("%d", count);

    return 0;
}
