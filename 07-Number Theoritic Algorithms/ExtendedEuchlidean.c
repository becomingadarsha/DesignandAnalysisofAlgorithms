#include <stdio.h>
#include <time.h>

// Function for Extended Euclidean algorithm
// It uses pointers to return multiple values
int extended_gcd(int a, int b, int *x, int *y)
{
    if (a == 0)
    {
        *x = 0;
        *y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extended_gcd(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

// main function
int main()
{
    clock_t start, end;
    double total_time = 0.00;

    int a = 30;
    int b = 50;

    int x, y;
    start = clock();
    printf("GCD is %d\n", extended_gcd(a, b, &x, &y));

    printf("x = %d, y = %d", x, y);
    end = clock();

    total_time += (double)(end - start) / CLOCKS_PER_SEC;
    printf("Execution time : %f seconds", total_time);
    return 0;
}