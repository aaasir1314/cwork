#include <stdio.h>
int main()
{
  char a[13];
  scanf("%s", a);
  long long sum = 0;
  int j = 1;
  for (int i = 0; i < 11; i++)
  {
    if (a[i] >= '0' && a[i] <= '9')
    {
      sum += (a[i] - '0') * j;
      j++;
    }
  }
  int k = sum % 11;
  if (k+'0' == a[12] || (k == 10 && a[12] == 'X'))
  {
    printf("Right");
  }
  else if (k != a[12] && k < 10)
  {
    a[12] = k + '0';
    printf("%s", a);
  }
  else
  {
    a[12] = 'X';
    printf("%s", a);
  }
  return 0;
}
