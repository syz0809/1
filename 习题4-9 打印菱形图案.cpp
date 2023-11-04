#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n/2+1;i++)//上半部分
	{
		for(j=0;j<n-i*2+1;j++)
		{
			printf(" ");
		}
		for(j=0;j<i*2-1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=1;i<=n/2;i++)//下半部分 
	{
		for(j=0;j<i*2;j++)
		{
			printf(" ");
		}
		for(j=0;j<n-2*i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
