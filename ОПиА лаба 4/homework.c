#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int troyka(int a, int b, int c)
{
	return a + b + c;
}
main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("тройка %d %d %d %s\n", a, b, c, ((troyka(a,b,c)) % 3 == 0) ? "является счастливой" : "не является счастливой");
}