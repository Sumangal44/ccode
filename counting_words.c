// counting words including spaces and excluding spaces
#include<stdio.h>
void main() 
{
    char s[20];
    int i,w=0,ws=0;
    printf("Enter a string \n");
    gets(s);
    for (i = 0; s[i]!='\0'; i++)
    {
        if (s[i]==' ')
        {
            ws++;
        }    
        else
        {
            w++;
        }
    }
    printf("Words are %d\n",w);
    printf("Words with spaces are %d\n",ws); 
}