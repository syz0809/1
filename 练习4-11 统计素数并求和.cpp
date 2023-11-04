#include<stdio.h>
int prime(int p);
int main()
{
	int n,m,count,sum,i;
	scanf("%d %d",&n,&m);
	count=sum=0;
	for(i=n;i<=m;i++)
	{
		if(prime(i)==1)
		{
			count++;
			sum+=i;
		}
	}
	printf("%d %d",count,sum);
	return 0; 
}
int prime(int p)
{
	int i,flag;
	flag=1;
	if(p<=1) return 0;
	if(p==2) return 1;
	for(i=2;i<p/2+1;i++)
	{
		if(p%i==0)
		{
			return 0;
		}
	}
	return 1;
}
