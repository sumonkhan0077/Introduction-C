#include <stdio.h>
int main()
{
      char a[101], b[101];
    scanf("%s %s", &a , &b);
    int lengthA = strlen(a);
    int lengthb = strlen(b);
    if (lengthA >= lengthb )
    {
        for (int i = 0; i <= lengthb; i++)
        {
            if (  a[i]!= b[i])
            {
                if (a[i] < b[i])
                {
                    print("%s", a);
                }
                
            }
            
          
        }
        
    }
    else{
         printf("b");
    }
    
    return 0;
}