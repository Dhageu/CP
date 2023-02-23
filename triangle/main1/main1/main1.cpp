#include <iostream>
#include "triangle.h"
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    triangle m[3];
    for (int i = 0; i < 3; i++) {
        cout << "Введите данные для треугольника №" << i + 1 << ": ";
        cin >> a >> b >> c;
        m[i].set(a, b, c);
        while (m[i].exst_tr() == false) {
            cout << "Треугольник №" << i+1 << " невозможен, введите новые данные" << endl;
            cin >> a >> b >> c;
            m[i].set(a, b, c);
        }
        m[i].show();
    }
}