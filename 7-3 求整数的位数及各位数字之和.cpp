#include<stdio.h>
int main()
{
	int n,a=0,b=0;
	scanf("%d",&n);
	do
	{
		a++;
		b+=n%10;
		n/=10;	
	} while(n>0);
	printf("%d %d",a,b);
	return 0;
}
