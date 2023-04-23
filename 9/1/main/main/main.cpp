#include <iostream>
using namespace std;

template <class T> void Swap(T& x, T& y) {
    T z;
    z = x;
    x = y;
    y = z;
}

template <class T> void OutXY(T &x, T &y) {
    cout << x << " " << y << endl;
}

class my_class {
    int a;
    float b;
public:
    my_class() {
        a = 0;
        b = 0;
    }
    my_class(int a, float b) {
        this->a = a;
        this->b = b;
    }
    void out() {
        cout << a << " " << b << endl;
    }
    friend ostream& operator <<(ostream& out, my_class& clas);
    my_class operator =(my_class& t);
};

my_class my_class::operator=(my_class& t) {
    a = t.a;
    b = t.b;
    return t;
}

ostream& operator <<(ostream& out, my_class& clas) {
    out << "(" << clas.a << ", " << clas.b << ")";
    return out;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 5, y = 10;
    cout << "До обмена: ";
    OutXY(x, y);
    Swap(x, y);
    cout << "После обмена: ";
    OutXY(x, y);
    my_class x1(5, 6.7);
    my_class x2(6, 5.7);
    cout << "До обмена: ";
    OutXY(x1, x2);
    Swap(x1, x2);
    cout << "После обмена: ";
    OutXY(x1, x2);
    return 0;
}