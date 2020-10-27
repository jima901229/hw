#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float i,j=0.1,a;
	for (i = 1; i <= 15; i++)
	{

		a = 5000 *(j + ((i*5)/1000));
		printf("%f\n",a);

	}
	system("pause");
	return 0;
}