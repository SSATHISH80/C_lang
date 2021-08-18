#include<stdio.h>
int main()
{
     int n,s,e,b=0,c=0,i;
    scanf("%d",&n);
    scanf("%d",&s);
    scanf("%d",&e);
    for(i=s;i<=n;i++)
    {
        if(i%2!=0)
        {c++;
            b+=i;

        }
    }

    for(i=s;c<e;i++)
    {
        if(i%2==0)
        { ++c;
            b+=i;

        }
    }
    
}
