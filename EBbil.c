#include "stdio.h"
int main() {
int units,bill=0;
scanf("%d",&units);
  if(units <=100)
     {
         printf("Bill Amount is ₹0");
     }
     else if(units>100 && units<=200)
     {
      bill = 50.0f + ((units-100)*.25f);
         printf("Bill Amount is  : %d",bill);
     }
     else if(units>200 && units<250)
     {
         bill = 50.0f + (100 *.25f)+((units-100)*.5f);
         printf("Bill Amount is  : %d",bill);
     }
     else if(units>250 && units <=350)
     {
         bill = 50.0f + (100*.25f)+ ((150)*.5f) + ((units-250) * .75f);
         printf("Bill Amount is  : %d",bill);
     }
     else
     {
         bill = 50.0f + (100*.25f)+ ((150)*.75f) + (100 *1)+((units-350)*3);
         printf("Bill Amount is  : %d",bill);
     }

  return 0;
}
