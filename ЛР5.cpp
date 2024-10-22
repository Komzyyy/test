#include <iostream>
#include "windows.h"
#define _USE_MATH_DEFINES 
#include <math.h> 
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x = 2.0, y = 4.0, z = 2.0, a = 1, b = 1, e = M_E;
	printf("Enter x: "), scanf_s("%lf", &x);
	printf("Enter y: "), scanf_s("%lf", &y);
	printf("Enter z: "), scanf_s("%lf", &z);
	a = static_cast<double>(pow(x, 3) * pow(tan(x), 2) * pow(x + y, 2)) + (z / sqrt(x + y) - 2 * tan(25 * M_PI / 180));
	b = static_cast<double>((y * pow(x, 2) - z) / ((exp(y * x)) - 1)) + (pow(5 - pow(y, 3), 1.0 / 3.0) / (abs(x - y) / sqrt(2 * x)));
	printf("a =%lf ", a);
	printf(" b =%lf ", b);

	system("pause");
	return 0;
}



