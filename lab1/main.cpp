#include "PClass.h"
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main() {
    
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    PClass v;

    
    double x = 0.48 * 8;  // Simplified calculation for x
    double y = 0.47 * 8;  // Simplified calculation for y
    double z = -1.32 * 8; // Simplified calculation for z

    
    v.fn_b(x, y, z);
    v.fn_a(x, y, z);

    
    cout << "Значення b: " << v.getB() << endl;
    cout << "Значення a: " << v.getA() << endl;

    return 0;
}
