#include <stdio.h>

long factorial(int n);

int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: n must be a non-negative integer.\n");
        return 1;
    }

    double sum = 0.0;
    for (i = 1; i <= n; i++)
     {
        sum += 1.0 / factorial(i);
    }

    printf("The sum of the series is: %.5f\n", sum);

    return 0;
}

long factorial(int n) {
   long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}