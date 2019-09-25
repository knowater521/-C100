#include <stdio.h>

int main()
{
	int score;
	char grade;

	scanf("%d",&score);

	grade = (score>=90)?'A':((score<60)?'C':'B');

	printf("%c\n",grade);

	return 0;

}