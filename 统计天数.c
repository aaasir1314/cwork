#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a[N];
    int k = 0;
    for (; k < N; k++)
    {
        scanf("%d", &a[k]);
    }
    int d = 0; // 计算天数
    int h = 0; // 储存天数
    int i = 0; // 计数器
    for (; i < N - 1; i++)
    {
        if (a[i + 1] > a[i])
        {
            d++;
            if (d > h)
            {
                h = d;
            }
        }
        else
        {
            d = 0;
        }
    }
    printf("%d", h+1);
    return 0;
}
