#include<stdio.h>
int main()
{
	double sum,n,i,item;
	sum=1,item=1;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		item*=i;
		sum+=1/item;
	}
	printf("%.8lf",sum);
	return 0;
}
