// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int b, m;
	b = 123;
	m = 12.234;
	float 
	w = 0.2;

	printf("%.2f\n", b + w);
	printf("%.2d\n", b * m);
	printf("%.1f\n", b * w);
	printf("%.2f\n", w / b);
	printf("%d\n", b % m);

	getchar();
    return 0;
}

