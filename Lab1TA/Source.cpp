#include <iostream>
#include<Windows.h>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const double pi = 3.14159265359;
    double L; // ������� ����
    double r; // ����� �����
    double S; // ����� �����

    // ������� ������� ���� �� �����������
    cout << "������ ������� ����: ";
    cin >> L;

    if (L <= 0) {
        cout << "������� ���� ������� ���� ����� ����." << endl;
        return 1;
    }

    // ������ ����� �����
    r = L / (2 * pi);

    // ������ ����� �����
    S = pi * pow(r, 2);

    // ������� ���������
    cout << "����� �����, ���������� ����� ������� " << L << " ������� " << S << endl;

    return 0;
}