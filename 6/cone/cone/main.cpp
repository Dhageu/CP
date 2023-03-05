#include <iostream>
#include "cone.h"
#include <cmath>
using namespace std;

ostream& operator<<(ostream& os, Cone& obj) {
	os << obj.x
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int i;
	Cone m[2];
	double x, y, z, r, h;
	for (i = 0; i < 2; i++) {
		cout << "¬ведите координаты центра конуса x, y, z, а также его радиус и высоту: ";
		cin >> x >> y >> z >> r >> h;
		m[i].set(x, y, z, r, h);
		cout << m[i];
	}
}