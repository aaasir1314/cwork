#include <stdio.h>
#include <math.h>
int main()
{
    double s;
    scanf("%lf", &s);
    int n = 0;
    double sum = 0;
    double a = 0.98;
    for (; sum <= s; n++)
    {
        sum += 2 * pow(a, n);
    }
    printf("%d", n);
    return 0;
}
