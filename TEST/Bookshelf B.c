#include <stdio.h>
int main()
{
    long long N, B;
    scanf("%lld%lld", &N, &B);
    int H[100000] = {0};
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &H[i]);
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (H[j] < H[j + 1])
            {
                int t = H[j];
                H[j] = H[j + 1];
                H[j + 1] = t;
            }
        }
    }
    int sum = 0, count = 0;
    for (int i = 0; sum + H[i] < B; i++)
    {
        sum += H[i];
        count++;
    }
    count++;
    printf("%d", count);
    return 0;
}
