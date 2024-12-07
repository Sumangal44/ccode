//print prime numbers within a given number
#include <stdio.h>

void main()
{
    int n, num, i, is_prime;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers within %d are:\n", n);
    for (num = 0; num <= n; num++)
    {
        is_prime = 1;
        if (num < 2)
        {
            is_prime = 0;
        }
        else
        {
            for (i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
        }
        if (is_prime)
        {
            printf("%d ", num);
        }
    }
}
