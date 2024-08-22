#include <stdio.h>

int main()
{
    int a[10][10], b[10][10],sum[10][10], row1, column1, row2, column2;
    printf("Enter how many rows you want in first matrix\n");
    scanf("%d", &row1);
    printf("Enter how many column you want  in first matrix\n");
    scanf("%d", &column1);
    printf("Enter how many rows you want  in second matrix\n");
    scanf("%d", &row2);
    printf("Enter how many column you want  in second matrix\n");
    scanf("%d", &column2);
if (row1==row2 &&column1==column2)
{
     for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            printf("Enter the %d %d th element\t", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe first Matrix is \n\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

     for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            printf("Enter the %d %d th element of second matrix\t", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nThe second Matrix is \n\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {

            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {

            sum[i][j] = a[i][j]+b[i][j];
            
        }
        printf("\n");
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {

           
            
        printf("%d ",sum[i][j]);
        }
        printf("\n");
    }




}
else
{
    printf("\nThe row number of both matrix and the column number of both matrix has to be same");
}


    return 0;
}