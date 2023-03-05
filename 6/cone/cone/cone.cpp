#include "cone.h"
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14;

Cone::Cone() {
	x = y = z = r = h = 0;
}

Cone::Cone(double radius, double height) {
	x = y = z = 0;
	r = radius;
	h = height;
}

Cone::Cone(double x_cntr, double y_cntr, double z_cntr, double radius, double height) {
	x = x_cntr;
	y = y_cntr;
	z = z_cntr;
	r = radius;
	h = height;
}

void Cone::set(double x_cntr, double y_cntr, double z_cntr, double radius, double height) {
	x = x_cntr;
	y = y_cntr;
	z = z_cntr;
	r = radius;
	h = height;
}

double Cone::square() {
	double S;
	S = pi * r * (r + sqrt((r * r) + (h * h)));
	return S;
}

double Cone::size() {
	double V = (1 / 3) * pi * (r * r) * h;
	return V;
}

void Cone::show() {
	cout << "Площадь конуса: " << square() << endl << "Объем конуса: " << size() << endl;
}