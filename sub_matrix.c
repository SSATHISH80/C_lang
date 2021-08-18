#include <stdio.h>
int a[10][10];
int n,k;
int sub_sum(int i,int j)
{ int o=i,m=j,s=0;

  for (i; i<=(o+n-k); i++) {
    for (j=m; j<=(m+n-k); j++) {
      //printf("%d%d",i,j);
         s+=a[i][j];
    }
    //printf("\n \n");
  }
  return s;
}
int main() {
int i,j;
scanf("%d %d",&n,&k);

for ( i = 0; i <n; i++) {
  for ( j = 0;j<n; j++) {
    scanf("%d",&a[i][j]);
  }
}
for (i = 0; i < k; i++) {
  for (j = 0; j < k; j++) {
    //printf("%d%d ",i,j);
  printf("%d ",sub_sum(i,j));
  }printf("\n");
}

return 0;
}
