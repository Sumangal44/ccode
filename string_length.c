#include <stdio.h>
#include <stdlib.h>
int main()
{
    char s[20];
    int i, length = 0;
    system("cls");
    printf("Enter a string:");
    fgets(s, sizeof(s), stdin);
    for (i = 1; s[i] != '\0'; i++)
    {
        length++;
    }
    printf("Length of string is %d", length);
    return 0;
}