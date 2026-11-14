#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sr;
    scanf("%d", &sr);

    for (int i = 0; i < c; i++)
    {

        printf("%d ", a[sr][i]);
    }
    printf("\n");
    int sc;
    scanf("%d", &sc);

    for (int i = 0; i < r; i++)
    {

        printf("%d\n", a[i][sc]);
    }
    return 0;
}
