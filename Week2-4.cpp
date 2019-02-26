#include<stdio.h>
using namespace std;
int main()
{
	char x;
	scanf("%c",&x);
	if(x>=65 && x<=90)
	printf("Capital Letter");
	else
	{
		if(x>=97 && x<=122)
		printf("Small Case Letter");
		else
		{
			if(x>=48 && x<=57)
			printf("Digit");
			else
			printf("Special Character");
		}
	}
}
