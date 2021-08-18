#include "stdio.h"
int main() {
int y;
scanf("%d",&y);
printf("%d",(y % 400==0));
if((y % 4==0 && y % 100!=0) ||(y%400==0))
{
  printf("%d : yes",y);
}
else
{
  printf("%d : no",y);
}
  return 0;
}
