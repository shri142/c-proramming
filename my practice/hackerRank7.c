#include <stdio.h>

int main()
{
    double meal_cost;
    int tip_percent;
    int tax_percent;
    double tip, tax, total_cost;
    scanf("%f",&meal_cost);
    scanf("%d",&tip_percent);
    scanf("%d",&tax_percent);
    tip = (tip_percent*0.01 )* meal_cost; 
    printf("%d",(int)tip);
    tax = (float)tax_percent* 0.01 *  meal_cost;
     total_cost= meal_cost+tip+tax ;
     printf("\n %f",total_cost);
    return 0;
}/*void solve(double meal_cost, int tip_percent, int tax_percent)
{
		int total;
    float p;
		   int a=0;
		 double meal= meal_cost;
		float tip= tip_percent * 0.01;
		 float tax= tax_percent*0.01;
		double t1,t2;

t1= meal*tip;
t2= meal*tax;

p=meal+t1+t2;
total= meal+t1+t2;

p=p-total;

  if(p>=0.5)
  {
      a=1;
  }
    if(a==1)
    {
        cout<<total+1;
    }
		else
		
		  cout<<total;
			}   
            
            
         void solve(double meal_cost, int tip_percent, int tax_percent) { meal_cost = (tip_percent*meal_cost)/100 + (tax_percent*meal_cost)/100 + meal_cost ; double y = fmod(meal_cost, 1); if(y>0.5){ int total = ceil(meal_cost); printf("%d", total); } else{ int total = floor(meal_cost); printf("%d", total); }

   
            
            
            */
		
