#include<stdio.h>
int main() 
{
    for (int i = 5; i <= 10; i++)
    {
         printf("%d \n", i);
         i++;
    }


    // for (int i = 0; i < 10; i++)
    // {
    //     if (i % 2 == 0 )
    //     {
    //         printf("%d \n", i);
    //     }
        
    // }
    

       for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0 )
        {
            printf("%d - odd\n", i);
        }
        else{
            printf("%d - even \n", i);
        }
    }


    //  for (int i = 1; i < 10; i++)
    // {
    //     if (i == 5)
    //     {
    //         break;
    //     }
    //      printf("%d \n", i);
    // }


    
    //  for (int i = 1; i < 10; i++)
    // {
    //     if (i == 5)
    //     {
    //        continue;
    //     }
    //      printf("%d \n", i);
    // }
    
    return 0;
}