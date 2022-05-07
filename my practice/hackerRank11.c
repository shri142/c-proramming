#include <stdio.h>
int main()
{
    int  n;

    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {   
        printf("%d",n);
        printf("×");
        printf("%d=%d",i,n*i);
        
        printf("\n");
    }
    return 0;
}