#include<stdio.h>
int add(int, int);
int main() 
{
	int a,b,sum;
 	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	sum=add(a,b);
	printf("%d\n",sum);
	return 0;
}

int add(int a,int b)
{
	int sum,carry; 
	if (b == 0) 
	return a;
	else
	sum = a^b;
	printf("%d ",sum);
	carry = (a&b) << 1;
	printf("%d \n",carry);
	return add(sum,carry);
}
