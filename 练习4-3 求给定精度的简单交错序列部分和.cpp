#include<stdio.h>
#include<math.h>
int main()
{
	double e,sum,i,flag,item;
	scanf("%lf",&e);
	sum=0,i=1,flag=1,item=1;
	while(fabs(item)>e)
	{
		sum+=item;
		flag=-flag;
		i+=3;
		item=1.0*flag*1/i;
	}
	sum+=item;
	printf("Sum = %.6lf",sum);
	return 0;
}
