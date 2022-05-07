#include <stdio.h>

void printstar(int a)
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int k = a; k > 1; k--)
    {
        for (int l = k - 1; l > 0; l--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("enter no of stars in largest line\n");
    scanf("%d", &n);
    printstar(n);
    return 0;
}