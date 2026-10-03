#include <stdio.h>
int main()
{
    int N, T;
    scanf("%d %d", &N, &T);
    double m[N];
    double v[N];
    double p[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lf %lf", &m[i], &v[i]);
        p[i] = (double)v[i] / m[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (p[j] < p[j + 1])
            {
                double t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
                double k = m[j];
                m[j] = m[j + 1];
                m[j + 1] = k;
            }
        }
    }
    double sum = 0;
    int i;
    for (i = 0; i < N && T - m[i] >= 0;)
    {
        sum += 1.0 * m[i] * p[i];
        T -= m[i];
        i++;
    }
    if (i < N && T > 0)
        sum += 1.0 * T * p[i];
    printf("%.2f", sum);
    return 0;
}
