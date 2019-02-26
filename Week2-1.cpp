#include<stdio.h>
int main()
{
	long int number;
	scanf("%d",&number);
	int r,sum=0;
	while(number>0)
	{
		r = number%10;
		sum += r;
		number=number/10; 
	}
	printf("The sum of the digits is %d",sum);
	return 0;
}
