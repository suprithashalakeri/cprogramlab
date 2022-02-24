#include<stdio.h>
int main()

{
   float unit, total, charge;
   
   //read the units
   printf("enter the number of units\n");
   scanf("%f",&unit);
   
   //Calculate the charge
   if(unit<0)
  
   {
       printf("invalid input");
       return 1;
       
   }
   if(unit<=200)
   {
       total=(unit*0.8)+100;
   }
   else if(unit<=300)
   {
       total=200*0.8+(unit-200)*0.9+100;
   }
   else
   {
      total=200*0.8+100*0.9+(unit-300)*1+100;
   }
      
   //calculate the total amount
   
   if(total>400)
   {
       total=total+(total*0.15);
   }
   
   //Display the bill
   printf("...Electricity Bill...\n");
   printf("........................\n");
   printf("No.of units :%f\n",unit);
   printf("The total amount :%f\n",total);
   
   return 0;
  }
  
