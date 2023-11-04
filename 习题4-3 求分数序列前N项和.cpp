#include<stdio.h>
int main()
{
	int n,i;
	double a,b,c,sum;
	scanf("%d",&n);
	a=2,b=1,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=a/b;
		c=a;
		a=a+b;
		b=c;
	}
	printf("%.2lf",sum);
	return 0;
}
