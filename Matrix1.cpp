/* Let's Code Arrays!
Write a C program to initialize a 3x3 array, insert elements into the array, read and print an array of elements using only pointers.
 Also find and print the sum of all diagonal elements. */
#include <stdio.h>

int main()
{

    int m[3][3],i,j;
    void init(int [3][3]);
    void printmat(int [3][3]);
    int sum_diagonal(int [3][3]);

    init(m);    // Initializing automatically.
    printmat(m); // Before doing anything, print it first and check whether all ok or not.
    printf("Sum of diagonal values of the matrix is %d\n",sum_diagonal(m));
    return 0;

}

int sum_diagonal(int m[3][3])
{
    int i,j,sum =0;
    // although directly value addition can be performed, I am running a loop.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (i == j)
                sum += m[i][j];
        }
    }

    // here, not running a loop. Directly getting added values in the variable sum. :)

    sum += m[0][2]+m[1][1]+m[2][0];

    return sum;

}

void init(int mat[3][3])            // Reading the value of k using pointer and assigning it to the 2d array.
{
    int i,j,k=0,*ptr_k = &k;
    int ask_value, *ptr_av = &ask_value;
    for(i=0;i<3;i++)
       for(j=0;j<3;j++)
       {
    /*       k++;
           mat[i][j] = *ptr_k; */
           printf("Element[%d],[%d]:",i,j);
           scanf("%d",&ask_value);
           mat[i][j]=*ptr_av;
       }
}

void printmat(int mat[3][3])
{
    int i,j;
    int * ptr = &mat[0][0];     // Declaring a pointer variable and assigning the address of 0th location of mat[][] to it.
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
            // printf("[%d][%d]%d ",i,j,*ptr++);   // Using dereferencing printing the value and then incrementing the pointer variable's value.
            printf("%d ",*ptr++);
        printf("\n");
    }
}

