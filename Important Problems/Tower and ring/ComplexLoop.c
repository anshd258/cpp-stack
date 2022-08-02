#include <stdio.h>

int main()
{
int i, j, a = 0, n;
scanf("%d", &n);
for(i=n; i>=1; i--)
{
    for (j = n; j > i; --j)
    {
      printf("%d ", j);
    }
    for(j=0; j<i; j++)
    {
      printf("%d ", i);
    }

    for(j=1; j<i; j++)
    {
      printf("%d ", i);
    }

    for (j = i+1; j <= n; ++j)
    {
      printf("%d ", j);
    }

    printf("\n");

}

for(i=2; i<=n; i++)
{
    for (j = n; j > i; --j)
    {
      printf("%d ", j);
    }
    for(j=0; j<i; j++)
    {
      printf("%d ", i);
    }

    for(j=1; j<i; j++)
    {
      printf("%d ", i);
    }

    for (j = i+1; j <= n; ++j)
    {
      printf("%d ", j);
    }

    printf("\n");

}

}
