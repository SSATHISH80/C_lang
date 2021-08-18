#include "stdio.h"
#include "string.h"
#include "math.h"
int main() {
  int no,i,j;
  scanf("%d",&no);
  char a[50];
  scanf("%s",a);
  for(i=(strlen(a)/2)-1;i>=0;i--)
  {
    printf("%c",a[i]);
  }
  if(no%2!=0){
printf("%c",a[strlen(a)/2]);
for(i=strlen(a)-1;i>(strlen(a)/2);i--)
{
  printf("%c",a[i]);
}
exit(0);
  }
  for(i=strlen(a)-1;i>(strlen(a)/2)-1;i--)
  {
    printf("%c",a[i]);
  }
  return 0;
}
