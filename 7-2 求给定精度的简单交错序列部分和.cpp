#include<stdio.h>
int main()
{

	double eps,sum=0,cnt=1,flag=1;
	scanf("%lf",&eps);
	while(1.0/cnt>eps)
	{
		sum=sum+flag*1.0/cnt;
		cnt+=3;
		flag=-flag;
	}
	sum=sum+flag*1.0/cnt;
	printf("sum = %.6lf",sum);
	return 0;
}
