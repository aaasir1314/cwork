#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[70000];
    int count = 0;
    for (int i = 0;; i++)
    {
        scanf("%c", &a[i]);
        count++;
        if (a[i] == 'E')
        {
            break;
        }
    }
    int my = 0, you = 0;
    for (int i = 0; i < count; i++)
    {
        if (a[i] == 'W')
        {
            my++;
        }
        if (a[i] == 'L')
        {
            you++;
        }
        if ((my >= 11 || you >= 11) && abs(my - you) >= 2)
        {
            printf("%d:%d\n", my, you);
            my = 0;
            you = 0;
        }
    }
    printf("%d:%d\n\n", my, you);
    my = 0;
    you = 0;

    for (int i = 0; i < count; i++)
    {
        if (a[i] == 'W')
        {
            my++;
        }
        if (a[i] == 'L')
        {
            you++;
        }
        if ((my >= 21 || you >= 21) && abs(my - you) >= 2)
        {
            printf("%d:%d\n", my, you);

            my = 0;
            you = 0;
        }
    }
    printf("%d:%d\n", my, you);
    my = 0;
    you = 0;

    return 0;
}
