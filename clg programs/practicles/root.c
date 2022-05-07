#include <stdio.h>

void main()
{
    int insert, position, n, i;
    int array[n];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter the array you want\n\n");
    for (i = 0; i < n; i++)
    {
        printf("element %d\n", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Enter the number you want to insert\n");
    scanf("%d", &insert);

    printf("Enter the position for inserted element\n ");
    scanf("%d", &position);

    printf("original array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    printf("\nNew array");

    for (int j = 1; j < position; j++)
    {
        printf("%d ", array[j]);
    }
    printf("%d ", insert);

    for (int k = position + 1; k < n; k++)
    {
        printf("%d ", array[k]);
    }

    
}