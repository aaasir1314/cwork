#include <stdio.h>
#define f(i) printf("%d\n", sizeof(i))

int main()
{
    int a;
    float b;
    double c;
    char d;
    long long e;
    long double f;

    f(a);
    f(b);
    f(c);
    f(d);
    f(e);
    f(f);

    return 0;
}
