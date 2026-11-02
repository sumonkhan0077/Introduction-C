#include <stdio.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", &a , &b);
    int len= strlen(a);
    for (int i = 0; i <= strlen(b); i++ , len++)
    {
        a[len] = b[i];
        // a[i+len] = b[i];
    }
    printf("%s", a);
    return 0;
}