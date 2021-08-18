#include "stdio.h"
#include "string.h"
int main() {
char a[100],b[15];
scanf("%[^\n]s",a);
int i,j=strlen(a);
//printf("%d",j);
for (i = 0; i < j; i++)
{//printf("%c\n",a[i]);

  if(a[i]!=' ')
  {
    strcat(b,a[i]);

  }
  /*
else
  {
    strcat(b,a[i]);
    printf("%s",b);
  }*/
}
printf("%c",b);
  return 0;
}
