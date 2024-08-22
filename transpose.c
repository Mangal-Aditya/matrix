#include <stdio.h>

int main()
{
    int a[10][10], t[10][10], row, column;
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

    printf("\nThe Orginal Matrix\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {

            t[i][j] = a[j][i];
        }
    }
    printf("After Transpose ,the matrix\n\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {

            printf("%d ", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}