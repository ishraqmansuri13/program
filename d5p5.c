#include <stdio.h>// do while and while example 

int main()
{
    int i, a;
    do
    {

        printf("ye programe kisi bhi no. ka sq. nikalne ke liye banaya gaya h\n"
               "is program se exit karne ke liye '0' type kare\n"
               "jis bhi no. ka sq. chahiye vo type kijiye\n");

        scanf("%d", &i);

        printf("you type=%d\n",i);
        a = i*i;
        printf("sq=%d\n\n", a);

    } while (a > 0);
     printf("you type '0' now your programe is stopd\n\n");
    return 0;
}
