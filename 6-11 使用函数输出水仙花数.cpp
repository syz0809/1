#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic( int number )
{
	int sum,temp,count,i,t;
	sum=0,temp=number,count=0,t=1;
	do
	{
		count++;
		temp/=10;
	}while(temp!=0);
	temp=number;
	do
	{
		t=1;
		for(i=0;i<count;i++)
		{
			t*=(temp%10);
		}
		sum+=t;
		temp/=10;
	}while(temp!=0);
	
	if(number==sum) return 1;
	else return 0;
}
void PrintN( int m, int n )
{
	int i;
	for(i=m+1;i<n;i++)
	{
		if(narcissistic( i )==1)
		{
			printf("%d\n",i);
		}
	} 
}
