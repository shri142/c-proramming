// A 057 SHRIKRISHNA LAXMAN UMBARE
// 'c' PROGRAM  TO CONVERT THE GIVEN TEMPRETURE IN DEGREE CENTIGRADE TO FAHRENHEIT
#include<stdio.h>
int main ()
{
float celcius,fahrenheit ;     // declaration

printf("enter temp in fahrenite:\n");  // input from user
scanf("%f",&fahrenheit);
celcius=((fahrenheit-32)*5)/9 ;      //calculation
printf("\ntemp in degree is %.2f\n",celcius); //output rounding up to 2 digit
return 0;
}

