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
 
	printf( "輸入一整天的總里程數 ");
	scanf_s("%d", &miles);

	printf( "輸入汽油一公升/加侖多少錢 ");
	scanf_s("%d", &gasCost);


	printf( "輸入平均一公升/加侖能行駛多少公里");
	scanf_s("%d", &mpg);


	printf( "輸入一天的停車費 ");
	scanf_s("%d", &parkFee);

	printf( "輸入一天的通行費 ");
	scanf_s("%d", &tolls);

	total = tolls + parkFee + (miles / mpg) * gasCost;

	printf("一天的花費%d\n", total);

	system("pause");
	return 0;

} 
