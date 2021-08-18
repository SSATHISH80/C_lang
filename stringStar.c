#include "stdio.h"
int main() {
  char a[27];
  scanf("%s",a);
  int n,i;
  scanf("%d",&n);
  for (i = 1; i <=n+(n-1); i++) {
    if(i==1||i==n+(n-1))
    printf("%c",a[i-1]);
    else
    printf("\n" );
  }
  return 0;
}
