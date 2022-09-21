#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;
	puts("¬ведите число a:");
	scanf("%d", &a);
	printf("¬ведено число %d\n", a);
	puts("¬ведите число b:");
	scanf("%d", &b);
	printf("¬ведено число %d\n", b);
	puts("__________________________\n");
	printf("| a * b | a + b | a - b |\n");
	puts("__________________________\n");
	printf("| %d * %d | %d + %d | %d - %d |\n", a, b, a, b, a, b);
	puts("__________________________\n");
	printf("| %d\t| %d\t| %d\t|", (a * b), (a + b), (a - b));
}