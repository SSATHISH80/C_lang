#include "stdio.h"
#include "stdlib.h"
#define s(a) a*a
int main(int argc, char *argv[]) {
double d=atof(argv[1]);
printf("%.2lf",3.14*s(d)*.25);
  return 0;
}
