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
    int s[n]; // 计数器
    int h = 0;
    for (; h < n; h++)
    {
        s[h] = 0;
    }
    for (int p = 0; p < n; p++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (j == k || j == p || k == p)
                {
                    continue;
                }
                else
                {
                    if (a[p] == a[j] + a[k])
                    {
                        s[p] = 1;
                    }
                }
            }
        }
    }
    int cnt = 0;
    int u = 0;
    for (; u < n; u++)
    {
        if (s[u] == 1)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}
