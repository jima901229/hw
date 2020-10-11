#include <stdio.h>
#include  <stdlib.h>

int main(void)
{
	int a, b, c, max, min;
	scanf_s("%d %d %d", &a, &b, &c);
	if (b > a && b > c)
	{
		if (a > c)
			max = b;
		else if (c > a)
			max = b;
	}
	else if (a > b && a > c)
	{
		if (b > c)
			max = a;
		else if (c > b)
			max = a;
	}
	else if (c > b && c > a)
	{
		if (b > a)
			max = c;
		else if (a > b)
			max = c;
	}

	if (b > a && b > c)
	{
		if (a > c)
			min = c;
		else if (c > a)
			min = a;
	}
	else if (a > b && a > c)
	{
		if (b > c)
			min = c;
		else if (c > b)
			min = b;
	}
	else if (c > b && c > a)
	{
		if (b > a)
			min = a;
		else if (a > b)
			min = b;
	}
	printf("程%d\n", max);
	printf("程%d\n", min);

	//材近耞
	scanf_s("%d %d %d", &a, &b, &c);
	if (b > a && b > c)
	{
		if (a > c)
			max = b;
		else if (c > a)
			max = b;
	}
	else if (a > b && a > c)
	{
		if (b > c)
			max = a;
		else if (c > b)
			max = a;
	}
	else if (c > b && c > a)
	{
		if (b > a)
			max = c;
		else if (a > b)
			max = c;
	}

	if (b > a && b > c)
	{
		if (a > c)
			min = c;
		else if (c > a)
			min = a;
	}
	else if (a > b && a > c)
	{
		if (b > c)
			min = c;
		else if (c > b)
			min = b;
	}
	else if (c > b && c > a)
	{
		if (b > a)
			min = a;
		else if (a > b)
			min = b;
	}
	printf("程%d\n", max);
	printf("程%d\n", min);
	

	system("PAUSE");

	return 0;

}