/*
	输入三个整数x,y,z，请把这三个数由小到大输出。
	采用冒泡排序 数组存储
*/
#include <stdio.h>

int main()
{
	int a[3];
	int i,j;
	int temp;
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
	for(i=0;i<2;i++)
		for(j=0;j<2-i;j++)
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}

	for(i=0;i<3;i++)
		printf("%d ",a[i]);
	return 0;
}
