#include <stdio.h>
#include <math.h>
void z1() {
	float a, b;
	printf("\nЗадание 1\nВведите стороны прямоугольника\na=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	printf("\nЕго площадь S равна %.2f\nЕго периметр P равен %.2f\n", a * b, 2 * (a + b));
}
void z2() {
	float d;
	printf("\nЗадание 2\nВведите диаметр окружности\nd=");
	scanf_s("%f", &d);
	printf("\nДлина окружности L равна %.2f\n", 3.14 * d);
}
void z3() {
	float a, b;
	printf("\nЗадание 3\nВведите два числа\na=");
	scanf_s("%f", &a);
	printf("b=");
	scanf_s("%f", &b);
	printf("\nИх среднее арифметическое равно %.2f\n", (a + b) / 2); 
}
void z4() { 
	float a = 0, b = 0;
	printf("\nЗадание 4\nВведите два ненулевых числа\na=");
	while (a == 0) {
		scanf_s("%f", &a);
		if (a == 0) printf("\nВведите ненулевое число\na=");
	}
	printf("b=");
	while (b == 0) {
		scanf_s("%f", &b);
		if (b == 0) printf("\nВведите ненулевое число\nb=");
	}
	a = pow(a, 2);
	b = pow(b, 2);
	printf("\nСумма их квадратов равна %.2f\nРазность их квадратов равна %.2f\nПроизведение их квадратов равно %.2f\nЧастное их квадратов равно %.2f\n", a + b, a - b, a * b, a / b);
}
void z5() {
	float a = 0, b = 0;
	printf("\nЗадание 4\nВведите два ненулевых числа\na=");
	while (a == 0) {
		scanf_s("%f", &a);
		if (a == 0) printf("\nВведите ненулевое число\na=");
	}
	printf("b=");
	while (b == 0) {
		scanf_s("%f", &b);
		if (b == 0) printf("\nВведите ненулевое число\nb=");
	}
	a = fabs(a);
	b = fabs(b);
	printf("\nСумма их модулей равна %.2f\nРазность их модулей равна %.2f\nПроизведение их модулей равно %.2f\nЧастное их модулей равно %.2f\n", a + b, a - b, a * b, a / b);
}
void main() {
	setlocale(0, "");
	int a = 1;
	while (a != 0) {
		printf("\nВыберите номер задания\n(для завершения введите 0)\n");
		scanf_s("%d", &a);
		switch (a) {
		case 1: z1(); break;
		case 2: z2(); break;
		case 3: z3(); break;
		case 4: z4(); break;
		case 5: z5(); break;
		case 0: break;
		default: printf("такого еще нет\n"); break;
		}
	}
	system("pause");
}
