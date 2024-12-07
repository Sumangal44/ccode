//convert binary to decimal and hexadecimal using switch case
#include <stdio.h>
#include <string.h>

void main()
{
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int choice;
    printf("Enter your choice:\n1. Binary to Decimal\n2. Binary to Hexadecimal\n");
    scanf("%d", &choice);

    int decimal = 0, base = 1,i,l;
    l= strlen(binary);
    for (i = l; i > 0; i--) 
    {
        decimal += (binary[i] - '0')*base;
        base *= 2;
    }

    switch (choice) 
    {
        case 1:
            printf("Decimal: %d\n", decimal);
            break;
        case 2:
            printf("Hexadecimal: %x\n", decimal);
            break;
        default:
            printf("Invalid choice!\n");
    }
}
