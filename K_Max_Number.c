#include <stdio.h>
#include <limits.h>
int rec(int a[], int t)
{
  if (t == -1)
  {
    return;
  }
  rec(a,t-1);
  printf("%d ", a[t]);
  

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
    int ans = rec(a,t-1);
    

    return 0;
}