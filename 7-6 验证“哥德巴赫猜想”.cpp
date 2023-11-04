#include<stdio.h>
#include<math.h> 
int is_primer(int a)
{
	int i,flag=1;
	if(a==2) return 1;
	for(i=2;i<sqrt(a)+1;i++)
	{
		if(a%i==0)
		{
			flag=0;
			return flag;
		}
	}
	if(flag==1)
	return flag;
}

int main()
{
	double n,i;
	scanf("%lf",&n);
	for(i=2;i<n/2+1;i++)
	{
		if(is_primer(i) && is_primer(n-i))
		{
			printf("%.0lf = %.0lf + %.0lf",n,i,n-i);
			break;		
		} 
	}
	return 0;
}
