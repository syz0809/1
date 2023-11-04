#include<stdio.h>
#include<math.h> 
int main()
{
	long long int n,temp,len=0,i;
	scanf("%lld",&n);
	temp=n;
	do
	{
		len++;
		temp/=10;
	}while(temp!=0);
	
	int a[len];
	
	for(i=len;i>=1;i--)
	{
		a[i]=n%10;
		n/=10;
	}
	
	for(i=1;i<=len;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
