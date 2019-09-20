/*
	ì³²¨ÄÇÆõ
*/
#include <stdio.h>

int main()
{
	int r1=1,r2=1;
	int i;
	for(i=1;i<10;i++)
	{
		printf("%d %d ",r1,r2);
		if(i%2==0)
			printf("\n");
		r1 = r1+r2;
		r2 = r1+r2;
	}

	return 0;
}