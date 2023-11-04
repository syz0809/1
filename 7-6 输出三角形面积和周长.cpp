#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double ar,s;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		s=(a+b+c)/2.0;
		ar=1.0*sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area = %.2lf; perimeter = %.2lf",ar,s*2);
	}
	else printf("These sides do not correspond to a valid triangle");
	return 0;
}
