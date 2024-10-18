#include "PClass.h"
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    PClass v;

    double x = 0.48*8, y = 0.47*8, z = -1.32*8;

    v.fn_b(x, y, z);
    v.fn_a(x, y, z);

    cout << "Значення b: " << v.getB() << endl;
    cout << "Значення a: " << v.getA() << endl;

    return 0;
}

void PClass::fn_b(double x, double y, double z)
{
    double b1 = (pow(fabs(y + x), 0.2)) / pow(fabs(z), 1.34);
    double b2 = (pow((y - z), 2)) / (1 + pow(sin(x), 2) * z);
    double b3 = (pow(fabs(z - y), 3)) / (z / cos(pow(x, 2)));
    b = b1 + b2 + b3;
}

void PClass::fn_a(double x, double y, double z)
{
    double a1 = sqrt(pow(fabs(pow(x, 2) - 1), 0.3));
    double a2 = (pow(fabs(sin(x) * (y + 2 * b)), 1. / 3));
    double a3 = (pow(x, 1) / faktr(1)) + (pow(y, 2) / faktr(2)) + (pow(z, 3) / faktr(3));
    a = (a1 - a2) / (1 + a3);
}

double PClass::faktr(int n)
{
    double f = 1;
    if (n > 1)
        for (int i = 2; i <= n; i++)
            f *= i;
    return f;
}

