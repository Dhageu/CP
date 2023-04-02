#pragma once
#include <iostream>
#include "type1.h"
#include "type2.h"
using namespace std;

void type1::Get_answer() {
	cout << "Ответом является любое значение X" << endl;
}

void type1::show() {
	cout << "Уравнение 0 = 0" << endl;
}

type2::type2(double a1) {
	A = a1;
}

void type2::Get_answer() {
	cout << "X = 0" << endl;
}

void type2::show() {
	cout << "Уравнение вида: " << A << "*x^2 = 0" << endl;
}
