#include <stdio.h>
int main()
{
    int i;
    for (i = 123; i < 334; i++)
    {
        int a = i, b = 2 * i, c = 3 * i;
        int n[9];
        int q = a;
        for (int x = 2; x >= 0; x--)
        {

            n[x] = q % 10;
            q = q / 10;
        }
        int p = b;
        for (int x = 5; x >= 3; x--)
        {

            n[x] = p % 10;
            p = p / 10;
        }
        int w = c;
        for (int x = 8; x >= 6; x--)
        {

            n[x] = w % 10;
            w = w / 10;
        }
        int ok = 1;
        for (int j = 0; j < 9; j++)
        {
            if (n[j] == 0)
            {
                ok = 0;
            }
        }
        for (int j = 0; j < 9; j++)
        {
            for (int k = j + 1; k < 9; k++)
            {
                if (n[j] == n[k])
                {
                    ok = 0;
                }
            }
        }
        if (ok)
        {
            printf("%d %d %d\n", a, b, c);
        }
    }
    return 0;
}
