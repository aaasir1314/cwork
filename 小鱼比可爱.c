#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int i = 0;
    for (; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int p = 0; // 鱼的排位
    int q = 0; // 计数器
    int w = 0; // 可爱计数器
    for (; p < n; p++)
    {
        for (; q <= p; q++)
        {
            if (a[q] < a[p])
            {
                w++;
            }
        }
        printf("%d ", w);
        w = 0;
        q = 0;
    }

    return 0;
}
