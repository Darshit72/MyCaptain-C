// Challenge: Recursion!
// Sum of Digits using recursion.
#include <stdio.h>
int main()
{
    int n;
    int sod(int);                   // Function prototype declaration
    printf("Enter a Number.\n");
    scanf("%d",&n);
    if(n<0) n *= -1;
    printf("Sum of Digit\(s\) of %d is %d.\n", n, sod(n));
    return 0;
}
int sod(int n)
{
    if (n)
        return n % 10 + sod(n/10);
    else
        return 0;
}
