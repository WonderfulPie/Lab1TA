#include <iostream>
#include<Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double pi = 3.14159265359;
    double L; // Довжина кола
    double r; // Радіус круга
    double S; // Площа круга

    // Зчитати довжину кола від користувача
    cout << "Введіть довжину кола: ";
    cin >> L;

    if (L <= 0) {
        cout << "Довжина кола повинна бути більше нуля." << endl;
        return 1;
    }

    // Знайти радіус круга
    r = L / (2 * pi);

    // Знайти площу круга
    S = pi * pow(r, 2);

    // Вивести результат
    cout << "Площа круга, обмеженого колом довжини " << L << " дорівнює " << S << endl;

    return 0;
}
