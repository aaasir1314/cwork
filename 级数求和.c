#include <stdio.h>
int main()
{
    int k;
    scanf("%d", &k);
    int i = 1;
    int n = 0;
    double s = 0.0;
    do
    {
        s += 1.0 / i;
        i++;
        n++;
    } while (s <= k);
    printf("%d", n);
    return 0;
}
