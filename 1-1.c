/*
问题：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：只能使用1,2,3,4这四个数字，按个位十位百位循环嵌套(三位数3层嵌套),注意无重复数字
*/
#include<stdio.h>

int main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=4;j++)
		{
			for(k=1;k<=4;k++)
			{	
				if(i!=j && i!=k && j!=k)
				printf("%d%d%d\n",i,j,k);
			}
		}
	}
	return 0;
}

