#include <stdio.h>
int main()
{
    int n, target;
    scanf("%d%d", &n, &target);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int left = 0, right = n - 1, mid;

    while (left <= right)
    {
        mid = (right + left) / 2;
        if (a[mid] == target)
        {
            printf("%d", mid);
            return 0;
        }
        else if (a[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("%d", -1);
    return 0;
}
