#include <stdio.h> //kg to gram program
float main()
{
  float g, k;

  do
  {
    printf("how many kg you can cange into GRAM\nand you can change gram to kg type 0\n");
    scanf("%f", &k);
    if (k == 0)
    {
      break;
    }

    printf("KG=%f\n", k);

    printf("gram=%f\n", k * 1000);

  } while (k < 0);

  do
  {
    if (k > 0)
    {
      break;
    }
    printf("how many GRAM you can cange into KG\n");
    scanf("%f", &g);

    printf("GRAM=%f\n", g);
    printf("kg=%f\n", g / 1000);
  } while (g < 0);

  return 0;
}
