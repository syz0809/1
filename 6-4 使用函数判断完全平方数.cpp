#include <stdio.h>
#include <math.h>

int IsSquare( int n );

int main()
{
    int n;
    
    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int IsSquare( int n )
{
	int a;
	a=sqrt(n);
	if(n==a*a) return 1;
	else return 0;
}
