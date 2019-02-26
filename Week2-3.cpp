#include<stdio.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int f;
	for(int i=1;i<=n;i++)
	{
		f=0;
		for(int j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0 && i!=1)
		printf("%d ",i);
	}
}

