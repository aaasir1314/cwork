#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
    {
        printf("是元音");
    }
    else
    {
        printf("是辅音");
    }

    return 0;
}
