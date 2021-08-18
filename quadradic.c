#include "stdio.h"
#include "math.h"
int main() {
  double a,b,c,d;
  scanf("%d %d %d",&a ,&b , &c);
  /*[x,y]=(b^2(-,+)sqrt(b^2-4ac))/2a*/
  d=(pow(b,2)-(4*a*c));
   if(d==0)
   {
     printf("Roots are (%d , %d)",(-1*b)/(2*a),(-1*b)/(2*a));
   }
   else if(d>0)
   {
     int r1,r2;
     r1=((-1*b)+sqrt(d))/(2*a);
     r2=((-1*b)-sqrt(d))/(2*a);
     printf("Roots are (%d , %d)",r1,r2);
   }
  return 0;
}
