#pragma once
#include <iostream>
#include <string>
using namespace std;

class Ocean {
protected:
	string name, location;
	double size, depth, square;
public:
	Ocean();
	Ocean(string Name, string Location, double Size, double Depth, double Square);
	friend ostream& operator <<(ostream& os, Ocean& obj);
	friend istream& operator >>(istream& is, Ocean& obj);
};

class Sea : public Ocean {
public:
	Sea();
	Sea(string Name, string Location, double Size, double Depth, double Square);
	friend ostream& operator <<(ostream& os, Sea& obj);
	friend istream& operator >>(istream& is, Sea& obj);
};

class Bay : public Sea {
public:
	Bay();
	Bay(string Name, string Location, double Size, double Depth, double Square);
	friend ostream& operator <<(ostream& os, Bay& obj);
	friend istream& operator >>(istream& is, Bay& obj);
};