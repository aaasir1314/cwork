#include <stdio.h>
int main()
{
    int a[10];
    int i = 0;
    for (; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int l;
    scanf("%d", &l);
    int m = 0;
    int n = 0;
    for (; m < 10; m++)
    {

        if (l + 30 >= a[m])
        {
            n++;
        }
    }
    printf("%d", n);
    return 0;
}
