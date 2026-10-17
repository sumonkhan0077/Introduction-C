#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int x;
    for (int i = 0; i < n; i++)
    {
        long long int rslt=1;
        scanf("%d", &x);
        for (int i = 1; i <= x; i++)
        {
            rslt *=i;
        }
        printf("%d\n", rslt);

        
    }
    
    return 0;
}