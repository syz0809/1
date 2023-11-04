#include<stdio.h>
int main()
{
	double h,sum=0,end;
	int i,n;
	scanf("%lf %d",&h,&n);
	if(n==0)
	{
		printf("0.0 0.0");
		return 0;
	}
	sum=h;
	for(i=0;i<n;i++)
	{
		sum=sum+h;
		h=h/2.0;
	}
	printf("%.1lf %.1lf",sum-2*h,h);
	return 0;
}
