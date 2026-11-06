#include <stdio.h>

int sum (int num1 , int num2 ) {
    int ans = num1 + num2;
    return ans;
}
int main()
{
    int valu = sum(5 , 6);
    printf("%d", valu);
        return 0;
}