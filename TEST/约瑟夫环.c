#include <stdio.h>
int main()
{
    int n; // 人数
    int m; // 报数
    scanf("%d %d", &n, &m);
    int arr[n];
    int i = 0;
    for (; i < n; i++)
    {
        arr[i] = i + 1;
    }
    int count = 0;
    int pos = 0;
    int q = 0;
    for (; q < n - 1;)
    {
        count++;
        if (arr[pos] == 0)
        {
            count--;
            pos = (pos + 1) % n;
        }
        else
        {
            if (count == m)
            {

                printf("%d\n", arr[pos]);
                arr[pos] = 0;
                pos = (pos + 1) % n;
                count = 0;
                q++;
            }
            else
            {
                pos = (pos + 1) % n;
            }
        }
    }
    return 0;
}
