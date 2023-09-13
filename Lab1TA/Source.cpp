#include <iostream>
#include<Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double pi = 3.14159265359;
    double r = 1 / (2 * pi); // Радіус круга

    // Знаходимо площу круга
    double S = pi * pow(r, 2);

    cout << "Площа круга, обмеженого колом довжини 1, дорівнює " << S << endl;

    return 0;
}