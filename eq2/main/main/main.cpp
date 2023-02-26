#include <iostream>
#include <cmath>
using namespace std;

class eq2 {
public:
	double a, b, c, D;
	eq2(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
		D = (b * b) - (4 * a * c);
	}
	void set(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
		D = (this->b * this->b) - (4 * this->a * this->c);
	}
	double find_X() {
		double X, X1, X2;
		if (D == 0) {
			X = (-b) / (2 * a);
			return X;
		}
		else {
			if (D > 0) {
				X1 = ((-b) - sqrt(D)) / (2 * a);
				X2 = ((-b) + sqrt(D)) / (2 * a);
				if (X1 > X2) {
					return X1;
				}
				else {
					return X2;
				}
			}
			else {
				cout << "КОРНЕЙ НЕТ" << endl;
				return 0;
			}
		}
	}
	double find_Y(double x1) {
		return a * (x1 * x1) + b * x1 + c;
	}
};

eq2 operator +(eq2& first, eq2& second) {
	eq2 result(0, 0, 0);
	result.set(first.a + second.a, first.b + second.b, first.c + second.c);
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	eq2 result(0, 0, 0), first(0, 0, 0), second(0, 0, 0);
	double a, b, c;
	cin >> a >> b >> c;
	first.set(a, b, c);
	cout << endl;
	cin >> a >> b >> c;
	second.set(a, b, c);
	cout << endl;
	result = first + second;
	first.find_X();
	cout << first.find_Y(4) << endl;
	result.find_X();
	return 0;
}