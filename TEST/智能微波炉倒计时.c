#include <stdio.h>
int main()
{
    unsigned int s;
    scanf("%d", &s);
    int h, min;
    min = s / 60;
    s = s - (min * 60);
    h = min / 60;
    min = min - (h * 60);
    printf("%02d:%02d:%02d", h, min, s);
    return 0;
}
