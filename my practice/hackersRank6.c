#include <stdio.h>

int recursion(int a)
{
    int sum;
    if (a == 1 || a == 2)
    {
        return a;
    }
    
    if (a == 3)
    {
        return 3;
    }
    sum = recursion(a - 1) + recursion(a - 2) + recursion(a - 3);

    return sum;
}

int main()
{
    int m, n;

    scanf("%d", &n);
    m = recursion(n);
    printf("%d", m);
}