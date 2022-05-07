#include <stdio.h>

int main()
{

  int num, counter = 0;
  printf("Enter a number \n");

  scanf("%d", &num);

  while (num != 0)
  {  counter++ ;
    num = num / 10;
  }
  printf("the number of digit are %d", counter);

  return 0;
}

// #include <stdio.h>

// int numpresent(long long int i)
// {   long long int l;

//   if (i >= 0 && i < 10)
//   {
//     printf("The integer made up of 1 number");
//     return 0;
//   }

//   if (i >= 10 && i < 100)
//   {
//     printf("The integer made up of 2 number");
//     return 0;
//   }

//   for (int z, l = 10; l < 1000 ,z<10;l*10 ,z++ )

//   {
//     if (i >= (10 * l) && i < (10 * l * l))
//     {

//       printf("The integer made up of %d number", z);
//       return 0;
//       z++;
//       }
//   }
//   return 0;
// }
// int main()
// {
//   long long int a;
//   printf("Enter a integer:");
//   scanf("%lld", &a);

//   /*   (10 raise to 0 )  to ( 10 raise to 1    -1)                ans 1
//      ( 10 raise to 1 ) to (  10 raise to 2   - 1)               ans 2
//      (10 raise to 2 )  to  ( 10 raise to 3    -1)               ans 3
//        ....
//        ....
//     (  10 raise to n) to  (  10 raise to n+1   -1)             ans  n+1
//   */

//   numpresent(a);

//   return 0;
// }   what is error in my above problem
