#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double H, W, BMI;

	printf("輸入身高\n");
	scanf_s("%lf", &H);
	printf("輸入體重\n");
	scanf_s("%lf", &W);

	BMI = W / ((H / 100)*(H / 100));
	printf("BMI:%lf\n", BMI);

	if (BMI < 18.5) {
		printf("Underweight\n");
	}
	if (BMI >= 18.5&&BMI < 24.9) {
		printf("Normal\n");
	}
	if (BMI >= 25 && BMI < 29.9) {
		printf("Overweight\n");
	}
	if (BMI > 30) {
		printf("Obese\n");
	}
	system("pause");
	return 0;
}