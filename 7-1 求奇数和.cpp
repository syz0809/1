#include<stdio.h>
int main()
{
	int sum=0,a;
	scanf("%d",&a);
	while(a>0)
	{
		if(a%2==1)
		{
		sum+=a;			
		}
		scanf("%d",&a);
	}
	printf("%d",sum);
	return 0;
}
