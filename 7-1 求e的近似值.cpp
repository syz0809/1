#include<stdio.h>
int main()
{
	int n,i;
	double item,sum;
	scanf("%d",&n);
	sum=item=1;
	for(i=1;i<=n;i++)
	{
		item=1.0*item*i;
		sum+=1/item;
	}
	printf("%.8lf",sum);
	return 0;
}
