#include<stdio.h>

void main()
{
int k = 8;
int x = 0 == 1 && k++;
printf("%d%d\n", x, k);
}// here k is not increased coz condition is false
//if we take 1==1 there then k value is increased by 1
