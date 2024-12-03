#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() 
{
    char name[100];
    int i, j, len;
    system("cls");

    printf("Enter a name: ");
    scanf("%s", name);

    len = strlen(name);
    for (i = 0, j = 0; i < len; i++)
    {
        if (name[i] == ' ')
        {
            name[j++] = '.';
        }
        else
        {
            name[j++] = name[i];
        }
    }
    name[j] = '\0';

    printf("Converted name is: %s", name);
    return 0;
}