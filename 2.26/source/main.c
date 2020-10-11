#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;
	printf("輸入第一個數\n");
	scanf_s("%d", &y);

	printf("輸入第二個數\n");
	scanf_s("%d", &x);
	if (y==2*x) printf("%d是%d的2倍\n", y, x);
	else printf("%d不是%d的2倍\n", y, x);
	system("pause");
	return 0;
}