#include <stdio.h>
int factorial (int number)
{

    if (number == 0||number== 1)
    {

        return 1;
    }

    else
    {
        return number * factorial(number - 1);
    }
}

int main()
{
    int i;

    printf("entre your no for fectorial\n");
    scanf("%d", &i);
   printf("the fectorial of %d is %d\n", i , factorial (i));
    return 0;
}
