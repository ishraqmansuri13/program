#include <stdio.h>//goto....  29-5-2023

int main()
{
    int i;

    do
    {
        printf("whats is the password.\n");

        scanf("%d", &i);


        if (i == 3)
        {
            goto exit;
        }

        printf("ye galat password h try again\n");

    } while (i< 0);

    do
    {
        printf("aap ko hint di jaa rhi h\n"
        "4-1=?\n");

        scanf("%d", &i);


        if (i == 3)
        {
            goto exit;
        }

        printf("ye galat password h try again\n");

    } while (i > 0);


exit:
printf("oo nice you will crack it.");

    return 0;
}
