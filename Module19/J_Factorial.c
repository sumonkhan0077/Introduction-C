// #include <stdio.h>
// long long int rec(int n, long long int i)
// {
//     if (i == n+1)
//     {
//         return 1;
//     }

//     long long int fact = rec(n, i + 1);

//     return fact = fact * i;
// }
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long int ans = rec(n, 1);
//     printf("%lld", ans);
//     return 0;
// }

#include <stdio.h>
long long int rec(int n)
{
    if (n == 1)
    {
        return 1;
    }
    long long int mul = rec(n - 1);
    return n * mul;
}
int main()
{
    int n;
    scanf("%d", &n);
    long long int ans = rec(n);
    printf("%lld", ans);
    return 0;
}