#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
void pyramid( int n )
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("%d ",i);	
		}
		printf("\n");
	}
}
