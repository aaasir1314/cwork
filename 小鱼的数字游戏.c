#include <stdio.h>
int main()
{
    int a[100];
    int i = 0; // 计数器
    for (; i < 100; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == 0)
        {
            break;
        }
    }
    int n = i - 1;
    for (; n >= 0; n--)
    {
        printf("%d ", a[n]);
    }

    return 0;
}
