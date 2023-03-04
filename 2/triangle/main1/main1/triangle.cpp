#include "triangle.h"
#include <iostream>
#include <cmath>
using namespace std;


bool triangle::exst_tr() {
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		return true;
	}
	else {
		return false;
	}
}

void triangle::set(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

void triangle::show() {
	cout << "Периметр треугольника равен: " << perimetr() << endl << "Площадь треугольника равна: " << square() << endl;
}

double triangle::perimetr() {
	double P = a + b + c;
	return P;
}

double triangle::square() {
	double p = perimetr() / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	return s;
}