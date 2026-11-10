#include <stdio.h>
void hello(int n, int i)
{
    if (i == n+1)
    {
        return;
    }

    printf("%d\n", i);
    hello(n,i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    hello(n, i);
    return 0;
}