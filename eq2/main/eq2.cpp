#include "eq2.h"
#include <iostream>
using namespace std;

eq2::eq2(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = (b * b) - (4 * a * c);
}

void eq2::set(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = (b * b) - (4 * a * c);
}

double eq2::find_X() {
	double X, X1, X2;
	if (D == 0) {
		X = (-b) / (2 * a);
		cout << "x равен: " << X << endl;
		return X;
	}
	else {
		if (D > 0) {
			X1 = ((-b) - sqrt(D)) / (2 * a);
			X2 = ((-b) + sqrt(D)) / (2 * a);
			if (X1 > X2) {
				cout << "x равен: " << X1 << endl;
				return X1;
			}
			else {
				cout << "x равен: " << X2 << endl;
				return X2;
			}
		}
		else {
			cout << "КОРНЕЙ НЕТ" << endl;
			return 0;
		}
	}
}

double eq2::find_Y(double x1) {
	cout << "Функция y равна: " << a * (x1 * x1) + b * x1 + c;
	return a * (x1 * x1) + b * x1 + c;
}

double eq2::getA() {
	return a;
}

double eq2::getB() {
	return b;
}

double eq2::getC() {
	return c;
}