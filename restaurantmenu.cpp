// Challenge 2
#include <stdio.h>

int main()
{
  int choice;
  printf("Main Menu\n");
  printf("1. Pizza\n");
  printf("2. Burger\n");
  printf("3. Pasta\n");
  printf("4. French Fries\n");
  printf("5. Sandwich\n");
  printf("Enter Your choice. [1...5]");
  scanf("%d",&choice);// Accept choice from the user first.
  // Based on choice, print food item and price on the screen.
  switch(choice)
  {
  case 1: printf("Food Item - Pizza\nPrice - Rs 239\n");
          break;
  case 2: printf("Food Item - Burger\nPrice - Rs 129\n");
          break;
  case 3: printf("Food Item - Pasta\nPrice - Rs 179\n");
          break;
  case 4: printf("Food Item - French Fries\nPrice - Rs 99\n");
          break;
  case 5: printf("Food Item - Sandwich\nPrice - Rs 149\n");
          break;
  default:printf("Item not served here as of now.\n");
  }
  return 0;
}
