#include<stdio.h>
int shu(int a,int b);
int main()
{
	int a,n,i;
	scanf("%d %d",&a,&n);
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+shu(a,i);
	}
	printf("s = %d",sum);
	return 0;
}

int shu(int a,int b)
{
	int i,t=a;
	for(i=0;i<b-1;i++)
	{
		t=t*10+a;
	}
	return t;
}
