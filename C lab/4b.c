/*
To generate an electricity bill by accepting meter number of the consumer, number of units consumed and print out the detail charges for the below scenario:
An electricity board charges the following rates for the use of electricity:
   for the first 200 units 80 paise per unit
   for the next 100 units 90 paise per unit
   beyond 300 units Rs 1 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount is more than Rs. 400, then an additional surcharge of 15% of total amount is charged.
*/

#define MIN_CHRG 100 

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int meter_number, units_consumed;
   float sub_total, total, surcharge, net_bill;
   
   system("clear");
   
   printf("Enter the Consumer Meter Number: ");
   scanf("%d", &meter_number);
   printf("Enter the Units Consumed: ");
   scanf("%d", &units_consumed);
   
   if(units_consumed <= 200)
      sub_total = units_consumed * 0.80 ;
   else if(units_consumed <= 300)
           sub_total = (units_consumed-200) * 0.90 + 160;
        else 
           sub_total = (units_consumed-(200+100)) * 1.00 + 160 + 90;        

   total = MIN_CHRG + sub_total;
   
   if(total >= 400)
      surcharge = total * 0.15 ;
   
   net_bill = total + surcharge ;
   
   printf("Total Billed Amount: %.2f\n", net_bill);
   
   return 0;
}