#include <stdio.h>
#include<stdbool.h>
int main()
{
    int a = 10;
    float b = 10.5;
    char c = 'A';
    double d = 10.5;
    long e = 10;
    long long f = 10;
    // boolean
    bool h = true;
    char g[10] = "Hello";
    short i = 10;
    unsigned int j = 10;
    signed char k = 10;

    printf("Size of a: %d\n", sizeof(a));
    printf("Size of b: %d\n", sizeof(b));
    printf("Size of c: %d\n", sizeof(c));
    printf("Size of d: %d\n", sizeof(d));
    printf("size of e: %d\n", sizeof(e));
    printf("size of f: %d\n", sizeof(f));
    printf("Size of g: %d\n", sizeof(g));
    printf("Size of h: %d\n", sizeof(h));
    printf("Size of i: %d\n", sizeof(i));
    printf("Size of j: %d\n", sizeof(j));
    printf("Size of k: %d\n", sizeof(k));



    printf("Value of a: %d\n", a);
    printf("Value of b: %f\n", b);
    printf("Value of c: %c\n", c);
    printf("Value of d: %f\n", d);
    printf("Value of e: %d\n", e);
    printf("Value of f: %d\n", f);
    printf("Value of g: %s\n", g);
    printf("Value of h: %d\n", h);
    printf("Value of i: %d\n", i);
    printf("Value of j: %d\n", j);
    printf("Value of k: %d\n", k);

    return 0;
}