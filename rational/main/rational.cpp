#include "rational.h"
#include <iostream>
using namespace std;

rational::rational() {

}

rational::rational(int a1, int b1) {
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "";
	}
	else {
		while (a > b) {
			a = a % b;
		}
		while (b % a == 0 && a > 1) {
			b = b / a;
			a = a / a;
		}
	}
}

void rational::set(int a1, int b1) {
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "";
	}
	else {
		while (a > b) {
			a = a % b;
		}
		while (b % a == 0 && a > 1) {
			b = b / a;
			a = a / a;
		}
	}
}

void rational::show() {
	if (b != 0) {
		cout << a << "/" << b;
	}
	else {
		cout << "Знаменатель равен нулю" << endl;
	}
}
