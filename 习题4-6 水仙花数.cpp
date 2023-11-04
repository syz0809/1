#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum;
	scanf("%d",&n);
	int start,end;
	start=pow(10,n-1),end=pow(10,n)-1;
	int a[10];
	for(i=0;i<=9;i++) a[i]=pow(i,n);
	for(i=start;i<=end;i++)
	{
		sum=0;
		int temp=i;
		do
		{
			sum+=a[temp%10];
			temp=temp/10;
		}while(temp!=0);
		if(i==sum)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
