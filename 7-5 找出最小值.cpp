#include<stdio.h>
int main()
{
	int n,i,min,a;
	scanf("%d",&n);
	scanf("%d",&a);
	min=a;
	for(i=0;i<n-1;i++)
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
