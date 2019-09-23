/*
	找素数
*/
#include <stdio.h>
#include <math.h>

int main()
{
	int i,j;
	int num;
	for(i=101;i<=200;i++)
	{
		for(j=2;j<sqrt(i)+1;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>=sqrt(i)) //这里大于号容易错
			printf("%d\n",i);

	}

	return 0;
}