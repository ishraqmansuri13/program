#include <stdio.h> // calculater 
#include <conio.h>

int add(int a, int b)
{

    int c = a + b;

    return (c);
}

int sub(int a, int b)
{

    int c = a - b;
    return (c);
}

int multy(int a, int b)
{

    int c = a * b;
    return (c);
}

int divide(int a, int b)
{

    int c = a / b;
    return (c);
}

int main()
{
    int x, x1, x2, x3, x4, i1, i2, i3, i4, i5, i6, i7, i8;
    printf("what you do in this Calculator\n"
           "1. for add\n2. for subtract\n3. for multyply\n4. for divide\n");

    scanf("%d", &x);

    if (x = 1)
    {
        printf("enter two number");
        scanf("%d", &i1);
        scanf("%d", &i2);
        x1 = add(i1, i2);

        printf("result=%d", x1);
        goto exit;
    } 
    if (x = 2)
    {
        printf("enter two number");
        scanf("%d", &i3);
        scanf("%d", &i4);
        x2 = add(i3, i4);
        printf("result=%d", x2);
        goto exit;
    }
    if (x = 3)
    {
        printf("enter two number");
        scanf("%d", &i5);
        scanf("%d", &i6);
        x3 = add(i5, i6);
        printf("result=%d", x3);
        goto exit;
    }

    if (x = 4)
    {
        printf("enter two number");
        scanf("%d", &i7);
        scanf("%d", &i8);
        x4 = add(i7, i8);
        printf("result=%d", x4);
        goto exit;
    }
    exit:
    return 0;
}
