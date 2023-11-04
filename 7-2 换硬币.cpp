#include<stdio.h>
int main()
{
	int x,a5,a2,a1,count,total;
	scanf("%d",&x);
	total=count=0;
	for(a5=x/5;a5>=1;a5--)
	{
		for(a2=(x-5*a5)/2;a2>=1;a2--)
		{
			a1=x-5*a5-2*a2;
			if(a1>=1)
			{
				total=a1+a2+a5;
				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",a5,a2,a1,total);
				count++;
			}
		}
	}
	printf("count = %d",count);
	return 0;
}
