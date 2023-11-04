#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	double sum=0,a;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=1;
		for(j=1;j<=i;j++)
		{
			a=a*j;
		}
		sum+=a;
	}
	printf("%.0lf",sum);
	return 0;
}
