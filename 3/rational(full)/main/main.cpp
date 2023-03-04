#include <iostream>
#include "rational.h"
using namespace std;

rational operator -(const rational& first, const rational& second) {
    rational result;
    if (second.b == first.b) {
        result.set(first.a - second.a, first.b);
        return result;
    }
    else {
        result.set((first.a * second.b) - (second.a * first.b), (first.b * second.b));
        return result;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a, b, i;
    cout << "Введите количество дробей: ";
    cin >> n;
    rational* m = new rational[n];
    for (i = 0; i < n; i++) {
        cout << "Введите числитель и знаменатель для дроби №" << i + 1 << ": ";
        cin >> a >> b;
        m[i].set(a, b);
        m[i].show();
        cout << endl;
    }
    if (i > 0) {
        rational result(0, 0);
        
        result = m[0] + m[1];
        cout << "Сумма первой и второй дроби " << endl;
        result.show();
        cout << endl;
        
        result = m[0] - m[1];
        cout << "Разность первой и второй дроби " << endl;
        result.show();
        cout << endl;
        
        cout << "Инкремент первой дроби " << endl;
        m[0]++;
        m[0].show();
        cout << endl;
        
        cout << "Операция сравнения == первой и второй дроби " << endl;
        m[0] == m[1] ? cout << "Дроби равны" << endl : cout << "Дроби не равны" << endl;
        cout << endl;
        
        cout << "Операция сравнения > первой и второй дроби " << endl;
        m[0] > m[1] ? cout << "Первая дробь больше второй" << endl : cout << "Первая дробь меньше второй" << endl;
        cout << endl;

        cout << "Присваивание первой дроби ко второй " << endl;
        m[0] = m[1];
        m[0].show();
        cout << endl;
    }
    delete[] m;

}