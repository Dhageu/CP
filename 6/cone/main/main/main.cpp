#include <iostream>
#include "cone.h"
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	Cone m[2];
	double x, y, z, R, h, r;
	for (i = 0; i < 2; i++) {
		cout << "Введите координаты центра конуса x, y, z, а также его радиус и высоту: ";
		cin >> m[i];
		cout << m[i];
	}
}