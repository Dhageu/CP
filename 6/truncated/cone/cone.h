#pragma once
#include <iostream>
using namespace std;

class Cone {
protected:
	double x, y, z, R, h;
public:
	Cone();
	Cone(double Radius, double height);
	Cone(double x_cntr, double y_cntr, double z_cntr, double Radius, double height);
	void set(double x_cntr, double y_cntr, double z_cntr, double Radius, double height);
	double square();
	double size();
	friend ostream& operator<<(ostream& os, Cone& obj);
	friend istream& operator>>(istream& os, Cone& obj);
};

class Truncated : public Cone {
	double r;
public:
	//Truncated();
	//Truncated(double Radius, double radius, double height);
	//Truncated(double x_cntr, double y_cntr, double z_cntr, double Radius, double radius, double height);
	void set(double x_cntr, double y_cntr, double z_cntr, double Radius, double radius, double height);
	double square();
	double size();
	friend ostream& operator<<(ostream& os, Truncated& obj);
	friend istream& operator>>(istream& os, Truncated& obj);
};