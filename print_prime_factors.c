#include <stdio.h>
void primefactors(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    primefactors(n);
    return 0;
}
void primefactors(int n)
{
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            printf("%d\t", i);
            n /= i;
        }
        else
        {
            i++;
        }
    }
    if (n > 1)
    {
        printf("%d", n);
    }
}