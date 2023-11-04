#include<stdio.h>
#include<math.h>
int is_prime(int a);
int main()
{
	int a,b,i,count=0,sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(is_prime(i))
		{
			count++;
			sum=sum+i;	
		} 
	}
	printf("%d %d",count,sum);
	
	return 0; 
}

int is_prime(int a)
{
	int i,flag=1;
	if (a <= 1) 
	{
        return 0;  // ²»ÊÇËØÊý
    }
	for(i=2;i<=sqrt(a);i++)
	{
		if(a%i==0) 
		{
			flag=0;
			return flag;
		}
	}
	return flag;
}
