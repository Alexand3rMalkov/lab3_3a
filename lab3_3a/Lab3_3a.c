#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int a, b;
	puts("������� ����� a:");
	scanf("%d", &a);
	printf("������� ����� %d\n", a);
	puts("������� ����� b:");
	scanf("%d", &b);
	printf("������� ����� %d\n", b);
	puts("__________________________\n");
	printf("| a * b | a + b | a - b |\n");
	puts("__________________________\n");
	printf("| %d * %d | %d + %d | %d - %d |\n", a, b, a, b, a, b);
	puts("__________________________\n");
	printf("| %d\t| %d\t| %d\t|", (a * b), (a + b), (a - b));
}