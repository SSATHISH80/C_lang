#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
 int main() {
char a[]="2001as";
int l,s=0,i;
l=strlen(a);
for(i=(l-1) ; i>=0; i--)
{
  if(isdigit(a[i]))
  {
     s+=(a[l-i-1]-'0')*pow(10,i);

  }
else
{
  printf("%d",-1);
  exit(0);
}
}
printf("%d",s);
   return 0;
 }
