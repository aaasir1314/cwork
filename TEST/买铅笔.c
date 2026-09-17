#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    int s = 0;
    scanf("%d", &n);
    for (; s < 3; s++)
    {
        int num, price;

        scanf("%d %d", &num, &price);
        int sum; // 总价
        if (n % num != 0)
        {
            sum = (n / num + 1) * price;
        }
        else
        {
            sum = n / num * price;
        }
        if (s==0||sum < i)
        {
            i = sum;
        }
    }
    printf("%d", i);
    return 0;
}
