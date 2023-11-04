#include<stdio.h>
int shu(int a,int n);
int main()
{
	int a,n,sum,i;
	scanf("%d %d",&a,&n);
	sum=0;
	for(i=1;i<n+1;i++)
	{
		sum+=shu(a,i);
	}
	printf("s = %d",sum);
	return 0;
}
int shu(int a,int n)
{
	int i,x;
	x=0;
	for(i=0;i<n;i++)
	{
		x=x*10+a;
	}
	return x;
}
