#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
double funcos( double e, double x )
{
	double i,n,item,flag,t,sum;
	n=0,item=1,flag=1,t=1,sum=0;
	while(fabs(t)>=e)
	{
		sum+=t;
		flag=-flag;
		n+=2;
		item=item*n*(n-1);
		t=1.0*flag*pow(x,n)/item; 
	}
	sum+=t;
	return sum;
}
