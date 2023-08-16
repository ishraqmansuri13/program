#include <stdio.h> //using brack......
int main()

{
  int a, b, c;
  printf("aap ko kis no ki table chahiye vo no type kare\n");
  scanf("%d", &a);

  for (b = 1; b <= 10; b++)
  {
    c = a * b;

    if (a == 3)
    {

      printf("3 ki table nhi mile gi baki sub ki le jaao");
      break;
    }

    printf("%d*%d=%d \n", a, b, c);
  }

  return 0;
}
