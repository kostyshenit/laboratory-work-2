// Лабораторна робота №2 — Завдання 2 (Варіанти 8 і 13)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter point coordinates (x, y): ";
    if (!(cin >> x >> y)) {
        x = -0.5; y = 0.5;
        cout << x << " " << y << endl;
    }

    if ((x >= -1.0 && x <= 0.0 && y >= 0.0 && y <= 1.0) ||
        (x >= 0.0 && x <= 1.0 && y >= -1.0 && y <= 0.0)) {
        cout << "Point (" << x << "; " << y << ") is INSIDE the shaded region." << endl;
    } else {
        cout << "Point (" << x << "; " << y << ") is OUTSIDE the shaded region." << endl;
    }

    return 0;
}
