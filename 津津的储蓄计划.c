#include <stdio.h>
int main()
{
    int save = 0; // 存的钱
    int out;      // 花的钱
    int money = 0;
    int i = 1;
    for (; i < 13; i++)
    {
        scanf("%d", &out);
        money += 300;
        if (out <= money)
        {
            save += (money - out) / 100 * 100;
            money = money - out - (money - out) / 100 * 100;
        }
        else
        {
            printf("-%d", i);
            return 0;
        }
    }
    printf("%d", save / 5 * 6 + money);

    return 0;
}
