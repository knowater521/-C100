/*
	一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
*/
#include <stdio.h>

int main()
{
	int i,j;
	int m,n;
	int x;
	for(i=1;i< 168/2 +1;i++)
	{
		if(168%i==0)
		{
			j = 168/i;
			if(i>j && (i+j)%2==0 && (i-j)%2==0)
			{
				m = (i+j)/2;
				n = (i-j)/2;
				x = n * n -100;
				printf("%d\n",x);
			}
		}
	}

	return 0;
	
}
