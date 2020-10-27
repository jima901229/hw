#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a, b, d;
	printf("Enter #of hour worked(-1 to end):\n");
	scanf_s("%f", &a);
	if (a == -1)
		return 0;
	printf("enter hourly rate of the worker($00.00):\n");
	scanf_s("%f", &b);
	
	d = a * b;
	printf("salary is:%f\n", d);






	system("pause");
	return 0;

}