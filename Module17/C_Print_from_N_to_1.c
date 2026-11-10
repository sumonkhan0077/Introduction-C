#include <stdio.h>
void hello(int n, int i)
{
    if (i == n+1)
    {
        
        return;
    }

    hello(n,i + 1);
    printf("%d ", i);
}
int main()
{
    int n;
    scanf("%d", &n);
    int i = 2;
    hello(n, i);
    printf("1");
    return 0;
}