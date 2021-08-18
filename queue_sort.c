#include <stdio.h>
#include<string.h>
int main() {
  char a[100],c[50];int b[27]={0};
  int l,i,j,k,e,y,n;
  scanf("%s",a);
  l=strlen(a);
for (i = 0,j=0; i < l; i++) {
  n=a[i]%97;
  b[n]+=1;
  e=a[i];y=0;
for (k = 0; k < i; k++) {
  if(a[k]==e)
  {
    y=1;
  }
}
if(!y)
{
  c[j]=a[i];j++;
}
}
for (i = 0; i < strlen(c); i++) {
  for ( j = 0; j < b[c[i]%97]; j++) {
    printf("%c",c[i]);
  }
}
  return 0;
}
