#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x, y;
	printf("��J�Ĥ@�Ӽ�\n");
	scanf_s("%d", &y);

	printf("��J�ĤG�Ӽ�\n");
	scanf_s("%d", &x);
	if (y==2*x) printf("%d�O%d��2��\n", y, x);
	else printf("%d���O%d��2��\n", y, x);
	system("pause");
	return 0;
}