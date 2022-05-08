#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    typedef int i;
    char num[] = "123";
    int temp;
    i b = strlen(num);
    printf("string is\n");
    printf("%s", num);
    printf("\n %d", strlen(num));
    printf("%S", num[0]);
    for (int i = 0; i < b / 2; i++)
    {
        temp = num[0];
    }
    // printf("%s",);
    return 0;
}