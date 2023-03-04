#include "rational.h"
#include <iostream>
using namespace std;

rational::rational() {
	a = 0;
	b = 0;
}

rational::rational(int a1, int b1) {
	int k = 0;
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "";
	}
	else {
		if (a < 0) {
			k = 1;
			a = a * (-1);
		}
		while (a > b) {
			a = a % b;
		}
		while (b % a == 0 && a > 1) {
			b = b / a;
			a = a / a;
		}
		if (k == 1) {
			a = a * (-1);
		}
	}
}

void rational::set(int a1, int b1) {
	int k = 0;
	a = a1;
	b = b1;
	if (b == 0) {
		cout << "";
	}
	else {
		if (a < 0) {
			k = 1;
			a = a * (-1);
		}
		while (a > b && a % b != 0) {
			a = a % b;
		}
		while (a > b && a % b == 0 && b != 1) {
			a = a / b;
			b = b / b;
		}
		if (a == b) {
			if (k == 1) {
				a = -1;
				k = 0;
			}
			else {
				a = 1;
			}
			b = 1;
		}
		else {
			while (b % a == 0 && a != 1 && a != b && b != 1) {
				b = b / a;
				a = a / a;
			}
			if (k == 1) {
				a = a * (-1);
				k = 0;
			}
		}
	}
}

void rational::show() {
	if (b != 0) {
		cout << "Полученная дробь: " << a << "/" << b << endl;
	}
	else {
		cout << "Знаменатель равен нулю" << endl;
	}
}

rational rational::operator+(const rational& first) {
	rational result;
	if (this->b == first.b) {
		result.set(this->a + first.a, this->b);
		return result;
	}
	else {
		result.set((this->a * first.b) + (first.a * this->b), (this->b * first.b));
		return result;
	}
}

rational rational::operator++(int) {
	this->a++;
	this->set(this->a, this->b);
	return *this;
}

bool rational::operator==(const rational& first) {
	if (this->a == first.a && this->b == first.b) {
		return true;
	}
	else {
		return false;
	}
}

bool rational::operator>(const rational& first) {
	if (this->b == first.b) {
		return this->a > first.a;
	}
	else {
		return ((this->a * first.b) > (first.a * this->b));
	}
}

rational rational::operator=(const rational& first) {
	this->a = first.a;
	this->b = first.b;
	return *this;
}

rational rational::operator ++() {
	this->a++;
	this->set(this->a, this->b);
	return *this;
}
