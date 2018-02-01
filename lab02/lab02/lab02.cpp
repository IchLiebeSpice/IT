// lab02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <math.h>
#define E 2.7
#define FUNC(x) (pow(e,sin(x)))*sin(cos(x))
#define Q(x, n) (sin(x))/(sin(n*x))
int main()
{
	double x, e = 2.7, S = 0.0, a = 1.0;
	printf("Enter (x): ");
	int w = scanf_s("%lf", &x);
	if (x < 1) {("Измените пожайлуйста исходные данные!"); return 0; }
		unsigned int n, N = 10;
		for (n = 1; n < N; ++n) {
			S += a;
			a *= Q(x, n);
		}
		double y = FUNC(x), tol = fabs(S - y);
		printf("Sum:\t\t%f\nControl:\t%.7f\nTolerance:\t%.7f\n", S, y, tol);
		getchar();
		return 0;
} 