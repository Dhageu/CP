#include <iostream>
#include "figure.h"
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, x3, x4, y1, y2, y3, y4;
    cout << "\t" << "Четырехугольник №1" << endl << endl;
    cout << "Введите x1, x2, x3, x4, y1, y2, y3, y4: ";
    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
    cout << endl;
    figure first(x1, x2, x3, x4, y1, y2, y3, y4);
    first.show();

    cout << "\t" << "Четырехугольник №2" << endl << endl;
    cout << "Введите x1, x2, x3, x4, y1, y2, y3, y4: ";
    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
    cout << endl;
    figure second(x1, x2, x3, x4, y1, y2, y3, y4);
    second.show();

    cout << "\t" << "Четырехугольник №3" << endl << endl;
    cout << "Введите x1, x2, x3, x4, y1, y2, y3, y4: ";
    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
    cout << endl;
    figure third(x1, x2, x3, x4, y1, y2, y3, y4);
    third.show();
}