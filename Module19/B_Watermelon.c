#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1 || n == 1 || n == 2)
    {
        printf("NO");
    }

    else if (n % 2 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}