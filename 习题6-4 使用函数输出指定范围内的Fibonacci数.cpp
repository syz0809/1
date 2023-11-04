#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n )
{
	int i,a,b,c;
	a=b=1;
	if(n==1 || n==2) return 1;
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;	
	}
	return c;
}

void PrintFN( int m, int n )
{
	int count,i,j;
	count=0;
	for(i=m;i<n+1;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==fib(j))
			{
				count++;
				if(count!=1)printf(" %d",i);
				else printf("%d",i);
				break;
			}
		}
	}
	if(count==0)printf("No Fibonacci number");
}
