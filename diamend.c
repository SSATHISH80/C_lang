#include "stdio.h"
int main() {
int n,i,j,s=0;
scanf("%d",&n);
for (i = 1; i <=n; i++) {
  for ( s = (n-i); s >0 ; s--) {
    printf(" ");
  }
  for (j=(2*i)-1;j>0;j--) {
    printf("*");
  }
  printf("\n");
}
for (i = n-1; i>0; i--) {
  for ( s = (n-i); s >0 ; s--) {
    printf(" ");
  }
  for (j=(2*i-1);j>0;j--) {
    printf("*");
  }
  printf("\n");
}
  return 0;
}
