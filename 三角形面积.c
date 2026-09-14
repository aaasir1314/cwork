#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    double s;
    scanf("%lf %lf %lf", &a, &b, &c);
    double p = (a + b + c) / 2;
    double x = p * (p - a) * (p - b) * (p - c);
    s = sqrt(x);
    printf("%.1f", s);
    return 0;
}
