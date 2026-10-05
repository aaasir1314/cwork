#include <stdio.h>
#define mod 1000000007
long long f(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n >= 2)
    {
        long long a = 1, b = 0;
        long long c;
        for (int i = 2; i <= n; i++)
        {
            c = (a + b) % mod;
            b = a;
            a = c;
        }
        return c;
    }
}

int main()
{
    // 在此编写你的代码
    int n;
    scanf("%d", &n);
    printf("%lld", f(n));
    return 0;
}
