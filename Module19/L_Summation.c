#include <stdio.h>
long long int rec(int a[], int t)
{
    if (t == -1)
    {
        return 0;
    }
    long long int sum = rec(a, t - 1);
     sum = sum + a[t];

    return sum;
}
int main()
{
    int t;
    scanf("%d", &t);
    int a[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &a[i]);
    }
    long long int ans = rec(a, t - 1);
    printf("%lld", ans);
    return 0;
}