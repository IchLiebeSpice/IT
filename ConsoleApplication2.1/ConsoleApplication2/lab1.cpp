// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <math.h>


int main()
{
	const float e = 2.7;
	float a, b, x;
	a = -4.53;
	b = 2.74;
	x = -8.07;
	printf("a = %.1f, b = %.2f, x = %.2f\n", a, b, x);
	printf("Answer: %.5f\n", a*pow(e, b-x)+cosh(3*tan(b*x)));
	getchar(); 
    return 0;
} 
  
    