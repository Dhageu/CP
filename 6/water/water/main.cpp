#include <iostream>
#include "water.h"
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    Ocean ocean;
    Sea sea;
    Bay bay;
    cout << "¬ведите название, местоположение, объем, глубину и площадь океана: ";
    cin >> ocean;
    cout << endl << "¬ведите название, местоположение, объем, глубину и площадь мор€: ";
    cin >> sea;
    cout << endl << "¬ведите название, местоположение, объем, глубину и площадь залива: ";
    cin >> bay;
    cout << endl;

    cout << ocean << sea << bay;

}