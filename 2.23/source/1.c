#include <stdio.h>
#include  <stdlib.h>

int main(void)
{

	int i;

	printf("請輸入一個整數:\n");

	scanf_s("%d", &i);

	if ((i % 2) == 0)  
		printf("偶數\n");

	else

		printf("奇數\n");
	system("PAUSE");

	return 0;




}