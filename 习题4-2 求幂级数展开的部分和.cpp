#include<stdio.h>
#include<math.h>
int main()
{
	double x,i,item,sum,t,flag;
	i=0,item=1,sum=0,t=1;
	scanf("%lf",&x);
	while(fabs(t)>=0.00001)
	{
		sum+=t;
		i++;
		item*=i;
		t=1.0*pow(x,i)/item;
	}
	sum+=t;
	printf("%.4lf",sum);
	return 0;
}
