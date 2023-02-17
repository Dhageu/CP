#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    double a, b, c;
public:
    bool exst_tr() {
        if ((a + b > c) && (a + c > b) && (b + c > a)) {
            return 1;
        }
        return 0;
    }
    void set(double a, double b, double c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void show() {
        cout << "Сторона 1: " << a << endl;
        cout << "Сторона 2: " << b << endl;
        cout << "Сторона 3: " << c << endl;
    }
    double perimetr() {
        double P = a + b + c;
        return P;
    }
    double square() {
        double s, p;
        p = (a + b + c) / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        return s;
    }
};

int main()
{
    Triangle m[3];
    double a, b, c;
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 3; i++) {
        cout << "Введите данные для треугольника № " << i + 1 << endl;
        cin >> a >> b >> c;
        m[i].set(a, b, c);

    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        if (m[i].exst_tr() == 1) {
            m[i].show();
            cout << "Периметр: " << m[i].perimetr() << endl << "Сторона: " << m[i].square() << endl;
        }
        else {
            cout << "Данный треугольник невозможен" << endl;
        }
        cout << endl;

    }
    return 0;
}