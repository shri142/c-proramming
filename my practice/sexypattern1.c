
// take input from user and print this pattern

//        *
//       **
//      ***
//     ****
// even i can use here matrix method given by harry

#include <stdio.h>

int main()
{
    int n, i, j, l;
    printf("Enter no of line you want max star \n");
    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        for (j = i - 1; j > 0; j--)
        {
            printf(" ");
        }
        for (l = 0; l <= n - i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}