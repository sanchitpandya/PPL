#include<stdio.h>
using namespace std;
int powerxy(int x,int y)
{
	int p=1,i=1;
	while(i<=y)
	{
		p=p*x;
		i++;
	}
	return p;
}
int fact(int x)
{
	int f=1,i=x;
	while(x>=1)
	{
		f=f*x;
		x--;
	}
	return f;
}
int main()
{
	int y=10,x;
	scanf("%d",&x);
	int i,k,power,f,sum;
	i=0,sum=0,k=1;
	while(i<=y)
	{
		if(k%2==0)
		sum=sum-(powerxy(x,i)/fact(i));
		else
		sum=sum+(powerxy(x,i)/fact(i));
		k++;
		i+=2;
	}
	printf("%d",sum);
}
