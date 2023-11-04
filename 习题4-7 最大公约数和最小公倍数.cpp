#include<stdio.h>
#include<math.h>
int gcd( int n, int m);

int main()
{
	int n,m,gys,gbs;
	scanf("%d %d",&n,&m);
	gys=gcd(n,m);
	gbs=n*m/gys;
	printf("%d %d",gys,gbs);
	return 0;
}
int gcd(int n,int m)
{
	if(n%m==0) return m;
	else return gcd(m,n%m);
}
