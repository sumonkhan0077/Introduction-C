#include <stdio.h>
#include <limits.h>
int rec(int a[], int t)
{
    if (t == -1)
    {
        return INT_MIN;
    }
    int max = rec(a, t - 1);
    if (max < a[t])
    {
        max = a[t];
    }

    return max;
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
    int ans = rec(a, t - 1);
    printf("%d ", ans);

    return 0;
}