#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans = 1;
    if (n % 4 == 0 || n % 7 == 0)
    {
        ans = 1;
    }
    else
    {
        int num = n;
        while (num != 0)
        {

            int lc = num % 10;
            num = num / 10;
            if (lc != 4 && lc != 7)
            {
                ans = 0;
                break;
            }
        }
    }
    if (ans ==  1)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    

    return 0;
}