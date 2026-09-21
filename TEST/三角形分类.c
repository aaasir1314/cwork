#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        int t = a;
        a = b;
        b = t;
    }
    if (a > c)
    {
        int t = a;
        a = c;
        c = t;
    }
    if (b > c)
    {
        int t = b;
        b = c;
        c = t;
    }
    int max = c;
    int mid = b;
    int min = a;
    if (max >= mid + min || max - min >= mid)
    {
        printf("Not triangle");
        return 0;
    }
    if (pow(max, 2) == pow(mid, 2) + pow(min, 2))
    {
        printf("Right triangle\n");
    }
    if (pow(max, 2) < pow(mid, 2) + pow(min, 2))
    {
        printf("Acute triangle\n");
    }
    if (pow(max, 2) > pow(mid, 2) + pow(min, 2))
    {
        printf("Obtuse triangle\n");
    }
    if (max == mid || max == min || mid == min)
    {
        printf("Isosceles triangle\n");
    }
    if (max == mid && mid == min)
    {
        printf("Equilateral triangle");
    }
    return 0;
}
