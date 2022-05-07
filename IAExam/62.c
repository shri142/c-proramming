#include<stdio.h>
int main()
{
int i = 5;
int l = i / -4;
int k = i % -4;
printf("%d %d\n", l, k);
return 0;
}  // for 5/-4 it will take - sign later but
// in case of modulus it will be like imagine on no line it will go to -4 to 0 then to 4 and the remainder is one