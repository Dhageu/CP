#include "figure.h"
#include <iostream>
#include <cmath>
using namespace std;

figure::figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
	this->x1 = x1;
	this->x2 = x2;
	this->x3 = x3;
	this->x4 = x4;
	this->y1 = y1;
	this->y2 = y2;
	this->y3 = y3;
	this->y4 = y4;
}
bool figure::is_prug() {
	float cosA, cosB, cosC, cosD, xAB, xBC, xCD, xAD, yAB, yBC, yCD, yAD;
	xAB = x2 - x1;
	xBC = x3 - x2;
	xCD = x4 - x3;
	xAD = x4 - x1;
	yAB = y2 - y1;
	yBC = y3 - y2;
	yCD = y4 - y3;
	yAD = y4 - y1;
	cosA = ((xAB * xAD) + (yAB * yAD)) / (sqrt((xAB * xAB) + (yAB * yAB)) * sqrt((xAD * xAD) + (yAD * yAD))) + 0.0;
	cosB = ((xAB * xBC) + (yAB * yBC)) / (sqrt((xAB * xAB) + (yAB * yAB)) * sqrt((xBC * xBC) + (yBC * yBC))) + 0.0;
	cosC = ((xCD * xBC) + (yCD * yBC)) / (sqrt((xCD * xCD) + (yCD * yCD)) * sqrt((xBC * xBC) + (yBC * yBC))) + 0.0;
	cosD = ((xCD * xAD) + (yCD * yAD)) / (sqrt((xCD * xCD) + (yCD * yCD)) * sqrt((xAD * xAD) + (yAD * yAD))) + 0.0;
	float AB, BC, CD, AD;
	AB = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	BC = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	CD = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	AD = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	if (cosA == 0 && cosB == 0 && cosC == 0 && cosD == 0) {
		if (AB == CD && BC == AD && AB != BC && CD != AD) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
bool figure::is_romb() {
	float AB, BC, CD, AD, AC, BD;
	AB = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	BC = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	CD = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	AD = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	AC = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
	BD = sqrt(((x4 - x2) * (x4 - x2)) + ((y4 - y2) * (y4 - y2)));
	if (AB == BC && BC == CD && CD == AD && AB == AD && AC != BD) {
		return true;
	}
	else {
		return false;
	}
}
bool figure::is_square() {
	float cosA, cosB, cosC, cosD, xAB, xBC, xCD, xAD, yAB, yBC, yCD, yAD;
	xAB = x2 - x1;
	xBC = x3 - x2;
	xCD = x4 - x3;
	xAD = x4 - x1;
	yAB = y2 - y1;
	yBC = y3 - y2;
	yCD = y4 - y3;
	yAD = y4 - y1;
	cosA = ((xAB * xAD) + (yAB * yAD)) / (sqrt((xAB * xAB) + (yAB * yAB)) * sqrt((xAD * xAD) + (yAD * yAD))) + 0.0;
	cosB = ((xAB * xBC) + (yAB * yBC)) / (sqrt((xAB * xAB) + (yAB * yAB)) * sqrt((xBC * xBC) + (yBC * yBC))) + 0.0;
	cosC = ((xCD * xBC) + (yCD * yBC)) / (sqrt((xCD * xCD) + (yCD * yCD)) * sqrt((xBC * xBC) + (yBC * yBC))) + 0.0;
	cosD = ((xCD * xAD) + (yCD * yAD)) / (sqrt((xCD * xCD) + (yCD * yCD)) * sqrt((xAD * xAD) + (yAD * yAD))) + 0.0;
	float AB, BC, CD, AD;
	AB = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	BC = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	CD = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	AD = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
 	if (cosA == 0 && cosB == 0 && cosC == 0 && cosD == 0) {
		if (AB == BC && BC == CD && CD == AD && AB == AD) {
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}
bool figure::is_in_circle() {
	float cosA, cosB, cosC, cosD, xAB, xBC, xCD, xAD, yAB, yBC, yCD, yAD;
	xAB = x2 - x1;
	xBC = x3 - x2;
	xCD = x4 - x3;
	xAD = x4 - x1;
	yAB = y2 - y1;
	yBC = y3 - y2;
	yCD = y4 - y3;
	yAD = y4 - y1;
	cosA = ((xAB * xAD) + (yAB * yAD)) / (sqrt((xAB * xAB) + (yAB * yAB)) * sqrt((xAD * xAD) + (yAD * yAD))) + 0.0;
	cosB = ((xAB * xBC) + (yAB * yBC)) / (sqrt((xAB * xAB) + (yAB * yAB)) * sqrt((xBC * xBC) + (yBC * yBC))) + 0.0;
	cosC = ((xCD * xBC) + (yCD * yBC)) / (sqrt((xCD * xCD) + (yCD * yCD)) * sqrt((xBC * xBC) + (yBC * yBC))) + 0.0;
	cosD = ((xCD * xAD) + (yCD * yAD)) / (sqrt((xCD * xCD) + (yCD * yCD)) * sqrt((xAD * xAD) + (yAD * yAD))) + 0.0;
	//cout << cosA << "  -------------";
	if (((cosA + cosC) == 0) && ((cosB + cosD) == 0)) {
		return true;
	}
	else {
		return false;
	}
}
bool figure::is_out_circle() {
	float AB, BC, CD, AD;
	AB = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	BC = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	CD = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	AD = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	if ((AB + CD) == (BC + AD)) {
		return true;
	}
	else {
		return false;
	}
}
void figure::show() {
	float AB, BC, CD, AD;
	AB = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
	BC = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
	CD = sqrt(((x4 - x3) * (x4 - x3)) + ((y4 - y3) * (y4 - y3)));
	AD = sqrt(((x4 - x1) * (x4 - x1)) + ((y4 - y1) * (y4 - y1)));
	cout << "Стороны четырехугольника ABCD: AB = " << AB << ", BC = " << BC << ", CD = " << CD << ", AD = " << AD << endl << endl;
	if (is_prug() == true) {
		cout << "Четырехугольник является прямоугольным" << endl << endl;
	}
	else {
		if (is_square() == true) {
			cout << "Четырехугольник является квадратом" << endl << endl;
		}
		else {
			if (is_romb() == true) {
				cout << "Четырехугольник является ромбом" << endl << endl;
			}
			else {
				cout << "Произвольный четырехугольник" << endl << endl;
			}
		}
	}
	if (is_in_circle() == true) {
		cout << "Около четырехугольника можно описать окружность" << endl;
	}
	else {
		cout << "Около четырехугольника нельзя описать окружность" << endl;
	}
	cout << endl;
	if (is_out_circle() == true) {
		cout << "В четырехугольник можно вписать окружность" << endl;
	}
	else {
		cout << "В четырехугольник нельзя вписать окружность" << endl;
	}
	cout << endl;
}