#include<stdio.h>
int main()
{
	double x;
	scanf("%lf",&x);
	if(x!=0) printf("f(%.1lf) = %.1lf",x,1.0/x);
	else printf("f(%.1lf) = 0.0",x);
	return 0;
}
