#include <stdio.h>
int main()
{
    int a; // 用电量
    scanf("%d", &a);
    if (a <= 10000)
    {
        if (a <= 150)
        {
            printf("%.1f", a * 0.4463);
        }
        else if (a <= 400 && a >= 151)
        {
            printf("%.1f", 150 * 0.4463 + (a - 150) * 0.4663);
        }
        else
        {
            printf("%.1f", 150 * 0.4463 + (400 - 150) * 0.4663 + (a - 400) * 0.5663);
        }
    }
    return 0;
}
