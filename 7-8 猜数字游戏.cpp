#include<stdio.h>
int main()
{
	int a,n,i,count=0,b;
	scanf("%d %d",&a,&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&b);
		count=count+1;
		if(b<0)
		{
			printf("Game Over\n");
			return 0;
		}
		if(b>a)
		{
			printf("Too big\n");
		}
		else if(b<a)
		{
			printf("Too small\n");
		}
		else if(b=a)
		{
			if(count==1)
			{
				printf("Bingo!\n");
				return 0;
			}
			else if(count<=3)
			{
				printf("Lucky You!\n");
				return 0;
			}
			else if(count<=n)
			{
				printf("Good Guess!\n");
				return 0;
			}
			else
			{
				printf("Game Over\n");
				return 0;
			}
		}
	}
    printf("Game Over\n");
	return 0;
		
} 
