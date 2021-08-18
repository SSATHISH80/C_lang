#include<stdio.h>
#include "string.h"
void swap(char *a,char *b)
{
    char c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int n,in=0,l,h;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    l=0;
    h=strlen(a)-1;
    while(l<h || l!=h)
    {
        switch(a[l])
        {

  case '0':
            {      l++;
                  if(a[h]=='1')
                  {
                      h--;
                  }
                  break;
            }
  case '1':
           {
            if(a[h]=='0'&&a[l]=='1')
            {
                swap(&a[l],&a[h]);
                in++;
            }
            h--;
            break;}
             }

    }
    printf("%s\n%d",a,in);
}
