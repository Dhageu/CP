#pragma once

class Cone {	 
	double x, y, z, r, h;
public:
	Cone();
	Cone(double radius, double height);
	Cone(double x_cntr, double y_cntr, double z_cntr, double radius, double height);
	void set(double x_cntr, double y_cntr, double z_cntr, double radius, double height);
	double square();
	double size();
	void show();
	friend ostream& operator<<(ostream& os, Cone& obj);
};	