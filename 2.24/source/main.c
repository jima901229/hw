#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int number;

	printf("請輸入一個整數: ");
	scanf_s("%d", &number);

	
	if (number % 2 == 0)
		printf("%d 是偶數。", number);
	else
		printf("%d 是奇數。", number);
	system("pause");
	return 0;
}