#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

Circle::Circle(float r, float x, float y) {
	//cout << "Вызвался конструктор";
}

Circle::Circle() {
	//cout << "Вызвался конструктор";
}

void Circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square() {
	float s = 3.14 * (radius * radius);
	return s;
}

bool Circle::triangle_around(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (a - p) * (b - p) * (c - p));
	float r = s / p;
	if (r == radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::triangle_in(float a, float b, float c) {
	float p = (a + b + c) / 2;
	float s = sqrt(p * (a - p) * (b - p) * (c - p));
	float r = (a * b * c) / (4 * s);
	if (r == radius) {
		return true;
	}
	else {
		return false;
	}
}

bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	float x = x_cntr - x_center;
	float y = y_cntr - y_center;
	float d = sqrt((x * x) + (y * y));
	if (d < (r + radius)) {
		return true;
	}
	else {
		return false;
	}
}