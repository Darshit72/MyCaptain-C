#include <stdio.h>

int main()
{
  int marks;
  printf("Enter Your Marks.");
  scanf("%d",&marks);// Accept marks from the user first.
  if (marks < 0 || marks > 100)
    printf("Input Error. Marks range 0 to 100.");
  else
  {
  if(marks < 40)
    printf("Grade F\n");
  else if (marks <= 54)
    printf("Grade D\n");
  else if (marks <= 69)
    printf("Grade C\n");
  else if (marks <= 84)
    printf("Grade B\n");
  else
    printf("Grade A\n");
  }
  return 0;
}
