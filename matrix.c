#include <stdio.h>

int main()
{
    int a[10][10], row, column;
    printf("Enter how many rows you want\n");
    scanf("%d", &row);
    printf("Enter how many column you want\n");
    scanf("%d", &column);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter the %d %d th element\t", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}