#include <stdio.h>

int factorial(int x)
{

    if (x == 0)
    {
        return 1;
    }
    
    else
    {
        return x* factorial(x - 1);
    }
}

int main()
{
    int n, value;
    printf("this program is for factorial\n");
    printf("Enter the number\n");
    scanf("%d", &n);
    
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
}