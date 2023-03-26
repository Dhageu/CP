#include "cone.h"
#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14;

Cone::Cone() {
	x = y = z = R = h = 5;
}

Cone::Cone(double Radius, double height) {
	x = y = z = 0;
	R = Radius;
	h = height;
}

Cone::Cone(double x_cntr, double y_cntr, double z_cntr, double Radius, double height) {
	x = x_cntr;
	y = y_cntr;
	z = z_cntr;
	R = Radius;
	h = height;
}

void Cone::set(double x_cntr, double y_cntr, double z_cntr, double Radius, double height) {
	x = x_cntr;
	y = y_cntr;
	z = z_cntr;
	R = Radius;
	h = height;
}

double Cone::square() {
	double S;
	S = pi * R * (R + sqrt((R * R) + (h * h)));
	return S;
}

double Cone::size() {
	double a = double(1) / double(3);
	double V = a * pi * (R * R) * h;
	return V;
}

ostream& operator <<(ostream& os, Cone& obj) {
	os << "x = " << obj.x << endl;
	os << "y = " << obj.y << endl;
	os << "z = " << obj.z << endl;
	os << "R = " << obj.R << endl;
	os << "h = " << obj.h << endl;
	os << "S = " << obj.square() << endl;
	os << "V = " << obj.size() << endl;
	return os;
}

istream& operator >>(istream& is, Cone& obj) {
	is >> obj.x >> obj.y >> obj.z >> obj.R >> obj.h;
	return is;
}