#include <stdio.h>
//#include<conio.h>
#include<stdlib.h>
void main()
{
    int a[10][10],b[10][10],c[10][10];
    int m1,n1,m2,n2,i, j;
    system("cls");
    printf("Enter the number of rows and columns of matrix A: \n");
    scanf("%d%d", &m1, &n1);
    printf("Enter elements of first matrix: \n");
    for (i = 0; i <m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of matrix B: \n");
    scanf("%d%d", &m2, &n2);
    if (m1 != m2 || n1 != n2)       
    {
        printf("Matrix addition is not possible.\n");
        exit(0);
    }
    
    printf("Enter elements of second matrix: \n");
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m2; i++)
    {
        for (j = 0; j < n2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix: \n");
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n1; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}