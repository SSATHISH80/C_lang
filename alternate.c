#include "stdio.h"
int main() {
  int n,l,h,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  l=0;
  h=(sizeof(a)/sizeof(a[0]))-1;
  for(;(l<h);l++,h--)
  {
    printf("%d%d",a[h],a[l]);
  }
  if(n%2!=0)
  {
    printf("%d",a[n/2]);
  }
  return 0;
}
