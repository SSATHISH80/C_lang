#include "stdio.h"
int main()
{
  float h,m,s;
  scanf("%f%f%f",&h,&m,&s);
  printf("%.4f hours\n",h+(m/60)+(s/3600));
  printf("%.4f minute\n",(h*60)+m+(s/60));
  printf("%.4f seconds\n",(h*3600)+(m*60)+s);

}
