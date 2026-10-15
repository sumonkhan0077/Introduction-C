#include <stdio.h>
int main()
{
    int pass = 1999;
    int x;
    while (scanf("%d", &x))
    {
        if (x == pass)
        {
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");
        }
        
    }
    
    return 0;
}