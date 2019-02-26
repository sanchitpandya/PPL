#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
		int a,b;
		scanf("%d%d",&a,&b);
		char op;
	do
	{
		printf("+\n");
		printf("-\n");
		printf("*\n");
		printf("/\n");
		printf("%%\n");
		printf("Q to exit\n");
		cin>>op;		
		switch(op)
		{
			case '+':
				printf("%d\n",a+b);
				break;
			
			case '-':
				printf("%d\n",a-b);
				break;
				
			case '*':
				printf("%d\n",a*b);
				break;
			
			case '/':
				printf("%d\n",a/b);
				break;
				
			case '%':
				printf("%d\n",a%b);
				break;
		}
	}while(op!='Q');	
}
