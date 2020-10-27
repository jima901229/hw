#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,i,j;
	printf("enter l:\n");
	scanf_s("%d",& a);
	printf("enter b:\n");
	scanf_s("%d",& b);
	for (i = 0; i < a; i++)
	{
		if (i == 0|| i == a - 1) 
		{
				for (j = 0; j < b; j++)
		{   
				printf("*");

		}
	
		}
		else
		for (j =0; j < b; j++)
		{
			if (j == 0 || j == b - 1)
				printf("*");
			else
				printf(" ");

		}
		printf("\n");
	}



	system("pause");
	return 0;

}