#include<stdio.h>
int main()
{
	int n,i,s;
	int a[5];
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		a[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&s);
		if(s>=90) a[0]++;
		else if(s>=80) a[1]++;
		else if(s>=70) a[2]++;
		else if(s>=60) a[3]++;
		else a[4]=a[4]+1;
	}
	for(i=0;i<5;i++)
	{
		if(i!=4) printf("%d ",a[i]);
		else printf("%d",a[i]);
	}
		return 0;
} 
