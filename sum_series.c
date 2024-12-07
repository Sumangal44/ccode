#include <stdio.h>
#include <math.h>

double factorial(int n);
double sumSeries(int n);

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    double sum = sumSeries(n);
    printf("Sum of the series: %.5f\n", sum);
    return 0;
}

double factorial(int n) {
    double fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

double sumSeries(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double term = 1.0 / factorial(i);
        sum += term;
    }
    return sum;
}