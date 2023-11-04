#include<stdio.h>
#include<math.h> 
int main()
{
	int k,item;
	double x,sum;
	scanf("%lf",&x);
	sum=item=1;
	k=1;
	while(pow(x,k)/item>=0.00001)
	{
		sum+=pow(x,k)/item;
		k++;
		item*=k;
	}
	printf("%.4lf",sum);
	return 0;
}
