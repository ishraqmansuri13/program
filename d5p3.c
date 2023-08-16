#include <stdio.h> //brake...........
int main()
{
    int i, age;

    for (i = 0; i < 100; i++)
    {

        printf("%d\nenter your age\n", i);
        scanf("%d", &age);
        if (age > 100)
        {
            break;
        }
    }

    return 0;
}
