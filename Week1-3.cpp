#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
	int result;
	result = ((a+b/c*d-e)*(f-g));
	printf("%d",result);
}
