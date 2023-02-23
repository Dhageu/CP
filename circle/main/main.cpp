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
    Circle first_circle(0, 0, 0);
    Circle second_circle(0, 0, 0);
    Circle third_circle(0, 0, 0);

    //first_circle

    cout << "\t" << "Данные окружности №1" << endl;
    cout << "Введите радиус, центр по x и центр по y: ";
    cin >> r;
    while (r < 0) {
        cout << "Радиус не может быть отрицательным, введите другой радиус: ";
        cin >> r;
    }
    cin >> x;
    cin >> y;
    
    first_circle.set_circle(r, x, y);
    
    cout << "Площадь окружности равна: " << first_circle.square() << endl << endl << "Введите данные для треугольника: ";
    cin >> a >> b >> c;
    
    while (is_triangle(a, b, c) == false) {
        cout << "Данный треугольник невозможен, введите другие значения сторон: ";
        cin >> a >> b >> c;
    }

    first_circle.triangle_around(a, b, c) == true ? cout << "Около данной окружности можно описать этот треугольник" << endl : cout << "Около данной окружности не получится описать этот треугольник" << endl;
    first_circle.triangle_in(a, b, c) == true ? cout << "В данную окружность можно вписать этот треугольник" << endl : cout << "В данную окружность не получится вписать этот треугольник" << endl;
    cout << endl;

    cout << "Введите радиус, центр по x и центр по y для другой окружности: ";
    cin >> r >> x >> y;
    while (r < 0) {
        cout << "Радиус не может быть отрицательным, введите другой радиус: ";
        cin >> r;
    }
    
    first_circle.check_circle(r, x, y) == true ? cout << "Данная окружность пересекается с исходной" << endl : cout << "Данная окружность не пересекается с исходной" << endl;
    cout << endl;
    //second_circle
    
    cout << "\t" << "Данные окружности №2" << endl; 
    cout << "Введите радиус, центр по x и центр по y: ";
    cin >> r;
    while (r < 0) {
        cout << "Радиус не может быть отрицательным, введите другой радиус: ";
        cin >> r;
    }
    cin >> x;
    cin >> y;

    second_circle.set_circle(r, x, y);

    cout << "Площадь окружности равна: " << second_circle.square() << endl << endl << "Введите данные для треугольника: ";
    cin >> a >> b >> c;

    while (is_triangle(a, b, c) == false) {
        cout << "Данный треугольник невозможен, введите другие значения сторон: ";
        cin >> a >> b >> c;
    }

    second_circle.triangle_around(a, b, c) == true ? cout << "Около данной окружности можно описать этот треугольник" << endl : cout << "Около данной окружности не получится описать этот треугольник" << endl;
    second_circle.triangle_in(a, b, c) == true ? cout << "В данную окружность можно вписать этот треугольник" << endl : cout << "В данную окружность не получится вписать этот треугольник" << endl;
    cout << endl;

    cout << "Введите радиус, центр по x и центр по y для другой окружности: ";
    cin >> r >> x >> y;
    while (r < 0) {
        cout << "Радиус не может быть отрицательным, введите другой радиус: ";
        cin >> r;
    }

    second_circle.check_circle(r, x, y) == true ? cout << "Данная окружность пересекается с исходной" << endl : cout << "Данная окружность не пересекается с исходной" << endl;
    cout << endl;
    //third_circle
    
    cout << "\t" << "Данные окружности №3" << endl;
    cout << "Введите радиус, центр по x и центр по y: ";
    cin >> r;
    while (r < 0) {
        cout << "Радиус не может быть отрицательным, введите другой радиус: ";
        cin >> r;
    }
    cin >> x;
    cin >> y;

    third_circle.set_circle(r, x, y);

    cout << "Площадь окружности равна: " << third_circle.square() << endl << endl << "Введите данные для треугольника: ";
    cin >> a >> b >> c;

    while (is_triangle(a, b, c) == false) {
        cout << "Данный треугольник невозможен, введите другие значения сторон: ";
        cin >> a >> b >> c;
    }

    third_circle.triangle_around(a, b, c) == true ? cout << "Около данной окружности можно описать этот треугольник" << endl : cout << "Около данной окружности не получится описать этот треугольник" << endl;
    third_circle.triangle_in(a, b, c) == true ? cout << "В данную окружность можно вписать этот треугольник" << endl : cout << "В данную окружность не получится вписать этот треугольник" << endl;
    cout << endl;

    cout << "Введите радиус, центр по x и центр по y для другой окружности: ";
    cin >> r >> x >> y;
    while (r < 0) {
        cout << "Радиус не может быть отрицательным, введите другой радиус: ";
        cin >> r;
    }

    third_circle.check_circle(r, x, y) == true ? cout << "Данная окружность пересекается с исходной" << endl : cout << "Данная окружность не пересекается с исходной" << endl;
    cout << endl;
}