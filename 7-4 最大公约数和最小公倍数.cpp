#include<stdio.h>
int gys1(int a,int b);
int main()
{
	int a,b,gbs,gys;
	scanf("%d %d",&a,&b);
	gys=gys1(a,b);
	gbs=a*b/gys;
	printf("%d %d",gys,gbs);
	return 0;
}

int gys1(int a,int b)
{
	if(b==0) return a;
	else return gys1(b,a%b);	
}


