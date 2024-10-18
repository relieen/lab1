#include "PClass.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    PClass V;

    double y = 0.47 * 8, z = -1.32 * 8;

    double x_start = -1.0, x_end = 1.0, dx = 0.2;

    cout << "Табуляція значень функцій a і b для x в діапазоні [" << x_start << ", " << x_end << "] з кроком " << dx << endl;
    cout << "----------------------------------------------------------" << endl;

    for (double x = x_start; x <= x_end; x += dx) {

        V.fn_b(x, y, z);
        V.fn_a(x, y, z);

        cout << "x = " << x << endl;
        cout << "a = " << V.getA() << endl;
        cout << "b = " << V.getB() << endl;
        cout << "----------------------------------------------------------" << endl;
    }

    return 0;
}