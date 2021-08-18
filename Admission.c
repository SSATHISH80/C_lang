#include<stdio.h>
#include<string.h>
void admit(int a,int b, int c, int d)
{ int p=0;
	if((d-c)==5)
	{
	if(b>=4||)
	{
		p=1;
	}
	else{
		p=0;
	}
	}
	else if((d-c)<=7)
	{
		p=1;
	}
	else{
		p=0;
	}
	if(p)
	{
		printf("eligible");
	}
	else{
		printf("not eligible");
	}

}
int main()
{
	int d,m,y,ay;
	scanf("%d%d%d%d",&d,&m,&y,&ay);
	admit(d,m,y,ay);

}
