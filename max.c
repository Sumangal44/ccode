#include<stdio.h>
#include<stdlib.h>
void maximum(int *a,int *b,int *c,int *max) 

{
    if (*a>*b && *a>*c)
    {
        *max=*a;
    }
    
     else if (*b>*a && *b>*c)
    {
        *max=*b;
    }
    
else
    {
        *max=*c;        
    }
}
int main() 
{
    int n1,n2,n3,max;
    system("cls");
    printf("Enter three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    maximum(&n1,&n2,&n3,&max);
    printf("Maximum number is %d",max);
    return 0;
}
