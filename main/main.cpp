#include <iostream>
#include "Circle.h"
#include <cmath>
using namespace std;

bool is_triangle(float a, float b, float c) {
    if ((a < b + c) && (b < a + c) && (c < a + b)) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "Russian");
    float a, b, c, r, x, y;
    Circle m[3];
    for (int i = 0; i < 3; i++) {
        cout << "Задайте радиус, центр по x и центр по y для окружности №" << i+1 << ": ";
        cin >> r >> x >> y;
        cout << endl;
        m[i].set_circle(r, x, y);
        cout << "Площадь окружности №" << i + 1 << " = " << m[i].square() << endl << endl;
        cout << "Задайте стороны треугольника: ";
        cin >> a >> b >> c;
        cout << endl;
        while (is_triangle(a, b, c) == false) {
            cout << "Данный треугольник невозможен, введите другие данные для треугольника: ";
            cin >> a >> b >> c;
            cout << endl;
        }
        if (m[i].triangle_around(a, b, c) == true) {
            cout << "Данный треугольник можно описать около окружности №" << i + 1 << endl;
        }
        else {
            cout << "Данный треугольник нельзя описать около окружности №" << i + 1 << endl;
        }
        if (m[i].triangle_in(a, b, c) == true) {
            cout << "Данный треугольник можно вписать в окружность №" << i + 1 << endl;
        }
        else {
            cout << "Данный треугольник нельзя вписать в окружность №" << i+1 << endl;
        }
        cout << endl;
        cout << "Задайте радиус, центр по x и центр по y для другой окружности: ";
        cin >> r >> x >> y;
        cout << endl;
        if (m[i].check_circle(r, x, y) == true) {
            cout << "Новая окружность пересекается с окружностью №" << i + 1 << endl;
        }
        else {
            cout << "Новая окружность не пересекается с окружностью №" << i + 1 << endl;
        }
        cout << endl;
    }
}