#include "stdio.h"
int main() {
int n,i,s=0,j;
scanf("%d",&n);
int a[n];
for ( i = 0; i < n; i++) {
scanf("%d",&a[i]);
s+=a[i];
}
s/=2;

for ( i = 0,j=1; i < n; i++,j++)
{for ( j = 0; j < n; j++) {
printf("%d %d",i,j);
  if((a[i]+a[j])==s)
  {
    printf("%d %d",i+1,j+1);

  }}
}

  return 0;
}
