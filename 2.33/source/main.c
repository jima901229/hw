#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int miles;
	int gasCost; 
	int mpg; 
	int parkFee; 
	int tolls;
	int total; 
 
	printf( "��J�@��Ѫ��`���{�� ");
	scanf_s("%d", &miles);

	printf( "��J�T�o�@����/�[�ڦh�ֿ� ");
	scanf_s("%d", &gasCost);


	printf( "��J�����@����/�[�گ��p�h�֤���");
	scanf_s("%d", &mpg);


	printf( "��J�@�Ѫ������O ");
	scanf_s("%d", &parkFee);

	printf( "��J�@�Ѫ��q��O ");
	scanf_s("%d", &tolls);

	total = tolls + parkFee + (miles / mpg) * gasCost;

	printf("�@�Ѫ���O%d\n", total);

	system("pause");
	return 0;

} 
