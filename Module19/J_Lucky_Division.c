#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ans =0;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        int lucky = 1;
        while (num != 0)
        {
            int digit = num % 10;
            if (digit != 4 && digit != 7)
            {
               lucky = 0;
               break;
            }

            num = num /10;
            
        }

        if (lucky == 1 && n % i == 0)
        {
           ans =1;
           break;
        }
        
        
    }

     if (ans == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}