#include <stdio.h>

void main()
{
    printf("Your series");
    printf("\n");

    for (int i = 1; i <= 100; i++)
    {

        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("shrikrishna umbare");
            printf("\n");
            continue;
        }
        else if (i % 3 == 0)
        {
            printf("shrikrishna ");
            printf("\n");
            continue;
        }
        else if (i % 5 == 0)

            printf("umbare ");

        else
        {
            printf("%d", i);
        }

        printf("\n");
    }
}
