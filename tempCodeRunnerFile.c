#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int a[10][10], b[10][10],c[10][10],m,n i, j;
    system("cls");
    printf("Enter the number of rows and columns of matrix A: \n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of first matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of matrix B: \n");
    scanf("%d%d", &m, &n);
    printf("Enter elements of second matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    getch();
}