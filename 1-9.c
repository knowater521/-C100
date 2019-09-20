/*
	要求输出国际象棋棋盘。
*/
#include <stdio.h>

int main()
{
	int i,j;
	int flag=0;
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(flag)
				printf("#");
			else
				printf("$");
			flag = !flag;
		}
		printf("\n");
	}
	return 0;
}
