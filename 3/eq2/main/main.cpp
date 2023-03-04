#include <iostream>
#include "eq2.h"
using namespace std;

eq2 operator +(eq2& first, eq2& second) {
    eq2 result(0, 0, 0);
    result.set(first.getA() + second.getA(), first.getB() + second.getB(), first.getC() + second.getC());
    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    eq2 result(0, 0, 0), first(0, 0, 0), second(0, 0, 0);
    double a, b, c, x;
    cout << "Введите коэффиценты для первого уравнения: ";
    cin >> a >> b >> c;
    cout << endl;
    first.set(a, b, c);
    first.find_X();
    cout << "Введите x для нахождения y: ";
    cin >> x;
    first.find_Y(x);

    cout << endl;

    cout << "Введите коэффициенты для второго уравнения: ";
    cin >> a >> b >> c;
    cout << endl;
    second.set(a, b, c);
    second.find_X();
    cout << "Введите x для нахождения y: ";
    cin >> x;
    second.find_Y(x);

    cout << endl;

    cout << "Третье уравнение, полученное из суммы коэффицентов двух предыдущих уравнений" << endl;
    result = first + second;
    cout << "Коэффиценты равны: " << result.getA() << ", " << result.getB() << ", " << result.getC() << endl;
    result.find_X();
    cout << "Введите x для нахождения y: ";
    cin >> x;
    result.find_Y(x);
}