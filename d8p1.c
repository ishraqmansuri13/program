#include <stdio.h> // function ka program h is me function ka use kar ke multiply or divide karte h use of goto 









int f1(int a, int b)
{

    int c;
    c = a * b;

    return (c);
}









int f2(int a, int b)
{

    int f;
    f = a / b;

    return (f);
}








int main()
{
    int x, y;
    printf("enter the numbers a \n");
    scanf("%d", &x);

    printf("enter the numbers b \n");
    scanf("%d", &y);

    int g = f1(x, y);
    int h = f2(x, y);

    printf("multy = %d\n", g);
    printf("divide = %d\n", h);

    return 0;
}
