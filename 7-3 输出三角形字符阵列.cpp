#include<stdio.h>
int main()
{
	int n,i,j,cnt;
	char s='A';
	scanf("%d",&n);
	cnt=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf("%c ",s+cnt);
			cnt++;
		}
		printf("\n");
	} 
	return 0;
}
