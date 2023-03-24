#include <iostream>
#include "water.h"
#include <string>
using namespace std;

Ocean::Ocean() {
	name = " ";
	location = " ";
	size = depth = square = 0;
}

Ocean::Ocean(string Name, string Location, double Size, double Depth, double Square) {
	name = Name;
	location = Location;
	size = Size;
	depth = Depth;
	square = Square;
}

ostream& operator <<(ostream& os, Ocean& obj) {
	os << "Название океана: " << obj.name << endl << "Местоположение океана: " << obj.location << endl << "Объем океана: " << obj.size << endl << "Глубина океана: " << obj.depth << endl << "Площадь океана: " << obj.square << endl;
	return os;
}

istream& operator >>(istream& is, Ocean& obj) {
	is >> obj.name >> obj.location >> obj.size >> obj.depth >> obj.square;
	return is;
}

Sea::Sea() {
	name = " ";
	location = " ";
	size = depth = square = 0;
}

Sea::Sea(string Name, string Location, double Size, double Depth, double Square) {
	name = Name;
	location = Location;
	size = Size;
	depth = Depth;
	square = Square;
}

ostream& operator <<(ostream& os, Sea& obj) {
	os << "Название моря: " << obj.name << endl << "Местоположение моря: " << obj.location << endl << "Объем моря: " << obj.size << endl << "Глубина моря: " << obj.depth << endl << "Площадь моря: " << obj.square << endl;
	return os;
}

istream& operator >>(istream& is, Sea& obj) {
	is >> obj.name >> obj.location >> obj.size >> obj.depth >> obj.square;
	return is;
}

Bay::Bay() {
	name = " ";
	location = " ";
	size = depth = square = 0;
}

Bay::Bay(string Name, string Location, double Size, double Depth, double Square) {
	name = Name;
	location = Location;
	size = Size;
	depth = Depth;
	square = Square;
}

ostream& operator <<(ostream& os, Bay& obj) {
	os << "Название залива: " << obj.name << endl << "Местоположение залива: " << obj.location << endl << "Объем залива: " << obj.size << endl << "Глубина залива: " << obj.depth << endl << "Площадь залива: " << obj.square << endl;
	return os;
}

istream& operator >>(istream& is, Bay& obj) {
	is >> obj.name >> obj.location >> obj.size >> obj.depth >> obj.square;
	return is;
}