#include "stdio.h"
int main() {
int n,j,i;
scanf("%d",&n);
int a[n][n];
for (i = 0; i < n; i++) {
  for ( j = 0; j < n; j++) {
scanf("%d",&a[i][j]);
  }
}
for (i = n-1; i >0; i--) {
  printf("%d",a[0][i]);
}
for (i = 0,j=0; i <n; i++,j++) {
  printf("%d",a[i][j]);
}
for (i = n-2; i >=0 ; i--) {
printf("%d",a[n-1][i]);
}
  return 0;
}
