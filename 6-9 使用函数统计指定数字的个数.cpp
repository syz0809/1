#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

/* 你的代码将被嵌在这里 */
int CountDigit( int number, int digit )
{
	int count;
	count=0;
	if(number<0) number=-number;
	do
	{
		if(number%10==digit)
		{
			count++;
		}
		number=number/10;
	}while(number!=0);
	return count;
}
