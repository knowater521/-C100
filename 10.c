/*
	¥��
*/
#include <stdio.h>

#define N 10

int main()
{
	int i,j;

	for(i=1;i<=N;i++)
	{
		for(j=1;j<=i;j++)
			printf("0");
		printf("\n");
	}

	return 0;
}
