#include<stdio.h>
int main()
{
	int x,count,total,a5,a2,a1,i,j;
	scanf("%d",&x);
	count=total=0;
	for(i=x/5;i>=1;i--)
	{
		for(j=(x-i*5)/2;j>=1;j--)
		{
			a5=i,a2=j;
			a1=x-5*a5-2*a2;
			if(a1!=0)
			{
				total=a5+a2+a1;
				count++;
				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",a5,a2,a1,total);
			}
		}
	}
	printf("count = %d\n",count);
	return 0;
} 
