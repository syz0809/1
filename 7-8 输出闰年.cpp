#include<stdio.h>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	if(n<=2000||n>2100) printf("Invalid year!"); 
	else
	{
	    for(i=2000;i<=n;i+=4)
	{
		if(i%4==0&&i%100!=0)
		{
			if(i>=2100) break;
			printf("%d\n",i);
			count++;
		}
	}
	if(count==0)
	{
		printf("None");
	}	
	}
	return 0;
}
