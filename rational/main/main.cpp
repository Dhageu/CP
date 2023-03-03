#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, a, b;
    cout << "Введите количество дробей: ";
    cin >> n;
    rational* m = new rational[n];
    for (int i = 0; i < n; i++) {
        cout << "Введите числитель и знаменатель для дроби №" << i + 1 << ": ";
        cin >> a >> b;
        m[i].set(a, b);
        m[i].show();
        cout << endl;
    }
    delete[] m;

}