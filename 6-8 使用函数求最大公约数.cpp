#include <stdio.h>

int gcd( int x, int y );

int main()
{
    int x, y;
    
    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));
    
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
int gcd( int x, int y )
{
	if(x%y==0) return y;
	else return gcd(y,x%y);
}
