#include<stdio.h>
int main()
{
	int m,n,i,j,sum,count;
	scanf("%d %d",&m,&n);
	count=0;
	for(i=m;i<=n;i++)//i��ʾĿǰ������������ 
	{
		sum=1;
		for(j=2;j<i;j++)//�ж��Ƿ�Ϊ���� 
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			count++;
			printf("%d = 1 ",i);
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				{
					printf("+ %d",j);
				}
			}
			printf("\n");	
		}
	}
	if(count==0)
	{
		printf("None");
	}
	return 0;
}
