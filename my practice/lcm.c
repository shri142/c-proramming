#include <stdio.h>

int main()
{
    int num1, num2, hcf, i;

    printf("enter 1st number  ");

    scanf("%d", &num1);
    printf("enter 2nd number  ");
    scanf("%d", &num2);

    for (i = 2; i <= num1 || i <= num2; ++i)
    {
        if (num1 % i ==0 && num2 % i == 0)
        {
              printf("hcf is %d\n", i);

              return 0 ;
        }
    }
        printf("lcm is 1");        

    return 0;
}