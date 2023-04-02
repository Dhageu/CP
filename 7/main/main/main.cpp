#include <iostream>
#include "type1.h"
#include "type2.h"
#include <Windows.h>
#include <string>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	double a;
	cin >> a;
	if (a == 0) {
		type1 type;
		type.Get_answer();
		type.show();
	}
	else {
		type2 type(a);
		type.Get_answer();
		type.show();
	}
}