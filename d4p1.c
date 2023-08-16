#include <stdio.h>

int main()
{
  int index = 0, num;
  printf("enter a number\n");

  scanf("%d", &num);
  do
  {

    printf("\n %d", index + 1);
    index = index + 1;

  } while (index < num);
  return 0;
}
