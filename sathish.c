#include<stdio.h>
int main()
{
  int c,i,j,s=0;
  scanf("%d",&c);
  for( i=1;i<=c;i++)
  {
    printf("%d",i);
  }printf("\n");
  for(i=2;i<=c;i++)
  { s=c*i;
    for(j=0;j<c;j++)
    {
      printf("%d",s--);
    }
    printf("\n");
  }
}
