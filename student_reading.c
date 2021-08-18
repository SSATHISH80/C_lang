#include "stdio.h"
int main() {
int n,i,c=0;
scanf("%d",&n);
int a[n],b[n];
for (i = 0;i < n;i++) {
  scanf("%d",&a[i]);
}
for (i = 0;i < n;i++) {
  scanf("%d",&b[i]);
}
for (i = 0;i < n;i++) {
  if(b[i]>=a[i])
  {
   c++;
  }

}
printf("%d",c);
  return 0;
}
