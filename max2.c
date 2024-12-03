#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *a,*b,*c,max;
    int n1,n2,n3;
    system("cls");
    printf("Enter three numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    a=&n1;
    b=&n2;
    c=&n3;
    max=*a;
   if (*b>max)
   {
    max=*b;
   }
  else if(*c>max)
   {
    max=*c;
   }
   else{
   max=*a;
   }
printf("Maximum number is %d",max);
    return 0;
}   