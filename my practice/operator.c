#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double mealCost=0,totalCost=0;
    int tipPercent=0,taxPercent=0;
    scanf("%lf",&mealCost);
    scanf("%d",&tipPercent);
    scanf("%d",&taxPercent);
    totalCost=mealCost+ mealCost*tipPercent/100+ mealCost*taxPercent/100;
    printf("The total meal cost is %d dollars.",(int) totalCost);
    return 0;
}
