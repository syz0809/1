#include<stdio.h>
int main()
{
	int i,x,y,n,flag;
	flag=0;
	scanf("%d %d",&x,&n);
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&y);
		if(y<0)
		{
			printf("Game Over");
			flag=1;
			break; 
		}
		if(y==x)
		{
			if(i==1)
			{
				printf("Bingo!");
				flag=1;
				break;
			}
			else if(i<=3)
			{
				printf("Lucky You!");
				flag=1;
				break;
			}
			else
			{
				printf("Good Guess!");
				flag=1;
				break;
			}
		}
		else if(y<x) printf("Too small\n");
		else printf("Too big\n");
	}
	if(flag==0)printf("Game Over");	
	return 0;
}
