#include<stdio.h>
int main()
{
	int n,i,a,min;
	scanf("%d %d",&n,&a);
	min=a;
	for(i=1;i<n;i++)
	{
		scanf("%d",&a);
		if(a<min)
		{
			min=a;
		}
	}
	printf("min = %d",min);
	return 0;
}
