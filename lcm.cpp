// Challenge: Recursion!
// LCM of two numbers using recursion.
// Formula of LCM = (n * d) / gcd(n,d)
// This program will find gcd of two numbers using recursion and then use above formula to find LCM.
#include <stdio.h>
int main()
{
    int n, d;
    int recgcd(int,int);                   // Function prototype declaration
    do
    {
        printf("Input first number:");
        scanf("%d",&n);
        printf("Input second number:");
        scanf("%d",&d);
    }while(n == 0 || d == 0);               // Ensuring that user doesn't enter 0 in any of these variables.
    printf("LCM of %d and %d = %d.\n",n,d,(n*d)/recgcd(n,d));
    return 0;
}
int recgcd(int n, int d)
{
    if (n % d == 0)
        return d;
    else
        return recgcd(d, n % d);
}
