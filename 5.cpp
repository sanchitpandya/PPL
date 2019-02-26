#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int expr1,expr2;
	expr1 = (x+y)/(x-y);
	expr2 = (x+y)*(x-y);
	printf("The result of expression one is %d",expr1);
	printf("\nThe result of expression one is %d",expr2);
}
