// Challenge: Recursion!
// Prime number using recursion.
#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int isprime(int,int);                   // Function prototype declaration
    printf("Enter any Natural Number.\n");
    scanf("%d",&n);
    if(n == 1)                              // Special Case
        printf("1 is neither prime nor composite no.");
    else
    if (n == 2)                             // Special Case
        printf("Number 2 is prime.");
    else
    if (n % 2 == 0)                         // all even nos. except 2 are not prime.
        printf("Number %d is not prime.",n);
    else
    {
        int sqrroot = pow(double (n),0.5);  // Vedic maths says, if there exists any factor, it will appear up to a square root of a number.
        if (sqrroot % 2 == 0)               // if square root of any number is even, make it odd.
            sqrroot++;
        printf("Number %d is %s.\n", n, (isprime(n,sqrroot)?"prime":"not prime"));    // ensuring that n and square root are odd numbers.
    };
    return 0;
}
int isprime(int n, int d)
{
        /* Every time you come here, we reduce the value of divisor by 2.
        The function will return 1 if no. is prime and 0 if no. is not prime. */
//        printf("%d %d\n",n,d);
        if (d == 1)
            return 1;
        else
        if(n % d == 0)
            return 0;
        else
            return isprime(n, d - 2);       // Recursive call
}
