/* GCD of two numbers using Euclid's algorithm*/


 
#include <stdio.h>

int main()

{

    int m, n; /* given numbers */


    printf("Enter-two integer numbers: ");

    scanf ("%d %d", &m, &n);

    while (n > 0)

    {

        int rem = m % n;

        m = n;

        n = rem;

    }

    printf ("GCD = %d \n",m);

 

}
