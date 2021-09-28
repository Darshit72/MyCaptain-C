/*
Write a C program to display the contents of the file in reverse order.
Also copy the contents from one file to another file.
Your input and output must look something like this

Input to the reverse function: My Captain Output: niatpaC yM
*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str[80];
    FILE * fpw = NULL, * fpr = NULL;

    // Open the file to write data within file.

    fpw = fopen("MyCaptain1.txt","w");
    if (fpw == NULL)
    {
        printf("Some error in opening of the file.\nExiting from the program.");
        getch();
        exit(0);
    }

    //Accept the data from the user and write it in the file.
    printf("Enter the string.\n");
    gets(str);
    fputs(str,fpw);
    fclose(fpw);    // Close the file and subsequently open the file for reading purpose.

    fpr = fopen("MyCaptain1.txt","r");
    if (fpr == NULL)
    {
        printf("Some error in opening of the file.\nExiting from the program.");
        getch();
        exit(0);
    }

    // Open the file to write data within file.

    fpw = fopen("MyCaptain2.txt","w");
    if (fpw == NULL)
    {
        printf("Some error in opening of the file.\nExiting from the program.");
        getch();
        fclose(fpr);
        exit(0);
    }
    fgets(str,79,fpr);
    printf("%s ",str);
    strrev(str);
    printf("%s",str);
    fprintf(fpw,"%s",str);      // writing reversed characters in mycaptain2.txt.

    // Close both files now.
    fclose(fpr);
    fclose(fpw);
    return 0;
}
