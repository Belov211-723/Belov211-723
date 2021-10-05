#include <stdio.h>
void z1() {
	int a, b;
	printf("\nЗадание 1\nВведите стороны прямоугольника\na=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	printf("\nЕго площадь S равна %d\n", a*b);
	printf("Его периметр P равен %d\n\n", 2 * (a + b));
}
void z2() {
	int d;
	printf("\nЗадание 2\nВведите диаметр окружности\nd=");
	scanf_s("%d", &d);
	printf("\nДлина окружности L равна %.2f\n", 3.14 * d);
}
void z3() {
	int a, b;
	printf("\nЗадание 3\nВведите два числа\na=");
	scanf_s("%d", &a);
	printf("b=");
	scanf_s("%d", &b);
	printf("\nИх мреднее арифметическое равно %.2f\n", a+b/2);
}
void main() {
	setlocale(0, "");
	int a = 1;
	while (a != 0) {
		printf("Выберите номер задания\n(для завершения введите 0)\n");
		scanf_s("%d", &a);
		switch (a) {
		case 1: z1(); break;
		case 2: z2(); break;
		case 3: z3(); break;
		default: printf("такого еще нет\n"); break;
		}
	}
	system("pause");
}
