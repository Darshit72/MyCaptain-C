// Challenge: Loops!
// Write a C program to print the following pattern 01 0101 010101 01010101 0101010101 010101010101
#include <stdio.h>
int main()
{
    int i,j;
    for (i=1; i<=6; i++ )
    {
        for(j=1;j<=i;j++)
            printf("01");
        printf(" ");    // If the required output needs to be printed in each line, we need to add \n in this printf().
    }
    return 0; 
}
