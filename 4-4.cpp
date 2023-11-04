#include<stdio.h>
int main()
{
	char c;
	int i=0,letter=0,blank=0,digit=0,other=0;
	for(i;i<10;i++)
	{
		c=getchar();
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) letter++;
		else if(c==' '||c=='\n') blank++;
		else if(c>='0'||c<='9') digit++;
		else other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}
