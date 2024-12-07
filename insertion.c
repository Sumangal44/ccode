//insert a number into any position in an array
#include<stdio.h>
void main() 
{  
    int a[50],i,n,key,pos;   
    printf("Enter the size of the array \n");
    scanf("%d",&n);     
    printf("Enter the elements of the array \n");   
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("The array before insertion is \n");    
    for(i=0;i<n;i++) 
     printf("%d\t",a[i]);
    printf("\nEnter the number to be inserted \n");   
    scanf("%d",&key);    
    printf("Enter the position at which the number is to be inserted \n");   
    scanf("%d",&pos);    
    for(i=n;i>pos-1;i--)    
    {
        a[i]=a[i-1];    
    }    
    a[pos-1]=key;    
    printf("The array after insertion is \n");    
    for(i=0;i<n+1;i++)    
    {    
        printf("%d\t",a[i]);
    }       
}