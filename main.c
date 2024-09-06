#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  srand(time(0));
  int player, computer = rand() % 3;
  /*0 ---> Snake
  1 ---> Water
  2 ---> Gun*/
  printf("Choose 0 for snake, 1 for Water and 2 for Gun \n");
  scanf("Player choose %d", &player);
  printf("Computer choose %d\n", computer);

  if (player == 0 && computer == 0)
  {
    printf("Its a Draw!\n");
  }
  else if (player == 0 && computer == 1)
  {
    printf("You Win!\n");
  }
  else if (player == 0 && computer == 2)
  {
    printf("You Loose!\n");
  }
  else if (player == 1 && computer == 0)
  {
    printf("You Loose!\n");
  }
  else if (player == 1 && computer == 1)
  {
    printf("Its a Draw!\n");
  }
  else if (player == 1 && computer == 2)
  {
    printf("You Win!\n");
  }
  else if (player == 2 && computer == 0)
  {
    printf("You Win!\n");
  }
  else if (player == 2 && computer == 1)
  {
    printf("You Loose!\n");
  }
  else if (player == 2 && computer == 2)
  {
    printf("Its a Draw!\n");
  }
  else
  {
    printf("Something went wrong!\n");
  }
  return 0;
}
