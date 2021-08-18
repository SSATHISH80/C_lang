#include<stdio.h>
int main()
{
	int n,i,j,k,s;
	scanf("%d",&n);
	printf("\n\n\n\n\n\n\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;++j)
			{
				printf("*");

			}
			for(s=1;s<=((2*n)-(i*2));s++)
			{
				printf(" ");
			}
			for(k=1;k<=i;++k)
			{
				printf("*");

			}

			printf("\n");

	}
	i=j=s=k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
			{
				printf("*");

			}
			for(s=1;s<=(i-1)*2;s++)
			{
				printf(" ");
			}
			for(j=1;j<=n+1-i;j++)
			{
				printf("*");

			}
			printf("\n");
	}
}
