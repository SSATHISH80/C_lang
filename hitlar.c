#include "stdio.h"
#include <string.h>
int main()
 { char a[200],*p;int i=0;
   scanf("%[^\n]s",a);
   p=&a[0];
 while (p!=NULL)
 {
p+=i;
 if(*p==' ')
 {

}
i++;
 }
}
