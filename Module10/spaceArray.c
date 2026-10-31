#include <stdio.h>
#include<string.h>
int main()
{
    char s[40];
    // gets(s);
    fgets(s, 13,stdin);
    printf("%s", s);
    return 0;
}