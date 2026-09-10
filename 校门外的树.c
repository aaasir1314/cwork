#include <stdio.h>
int main()
{
    int l, m;
    int u, v;

    scanf("%d %d", &l, &m);
    int a[l + 1];
    for (int k = 0; k <= l; k++)
    {
        a[k] = 0;
    }
    int i = 1;
    for (; i <= m; i++)
    {
        scanf("%d %d", &u, &v);
        for (; u <= v; u++)
        {
            a[u] = 1;
        }
    }
    int q = 0;
    int j = 0;
    for (; q <= l; q++)
    {
        if (a[q] == 1)
        {

            j++;
        }
    }
    printf("%d", l-j+1);
    return 0;
}
