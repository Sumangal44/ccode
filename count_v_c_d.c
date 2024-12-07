
//counting vowels,consonants and digits
#include<stdio.h>
void main() 
{
    char s[20];
    int i,v=0,c=0,d=0;
    printf("Enter a string \n");
gets(s);
for (i = 0; s[i]!='\0'; i++)
{
    if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
    {
        v++;
    }    
    else if (s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
    {
        c++;
    }
    else
    {
        d++;
    }
}
    printf("Vowels are %d\n",v);
    printf("Consonants are %d\n",c);
    printf("Digits are %d\n",d);
}
