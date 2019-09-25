#include <stdio.h>

int main()
{
	int num,i;
	
	scanf("%d",&num);
	printf("%d=",num);

	for(i=2;i<=num;i++)
	{
		while(num%i==0)
		{
			num /= i;
			printf("%d*",i);
		}
	}

	printf("\b");

	return 0;
}