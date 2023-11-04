#include<stdio.h>
int main()
{
	long long int h,n,i;
	double sum,h1;
	scanf("%lld %lld",&h,&n);
	sum=0;
	h1=0;
	if(n==0)
	{
		printf("%.1lf %.1lf",sum,h1);	
	}
	else
	{
		sum=h/1.0;
		h1=h/2.0;
		for(i=2;i<=n;i++)
		{
			sum+=h1*2.0;
			h1/=2.0;
		}
		printf("%.1lf %.1lf",sum,h1);
	}
}
