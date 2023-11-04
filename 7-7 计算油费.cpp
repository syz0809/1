#include<stdio.h>
int main()
{
	int a,b;
	char c;
	double sum=0;
	scanf("%d %d %c",&a,&b,&c);
	if(b==97) sum=a*7.93;
	else if(b==90) sum=a*6.95;
	else if(b==93) sum=a*7.44;
	if(c=='m') sum*=0.95;
	else if(c=='e') sum*=0.97;
	printf("%.2lf",sum);
	return 0;
}
