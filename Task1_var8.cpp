// Лабораторна робота №2 — Завдання 1 (Варіант 8)
// Студент: Костишен А. В. | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, A, C, Y;
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;
    cout << "Enter x, A, C: ";
    if (!(cin >> x >> A >> C)) {
        x = 2.0; A = 3.0; C = 5.0;
        cout << x << " " << A << " " << C << endl;
    }

    // У методичці для варіанта 8 вказано A = C та A != C (третій рядок дублює A = C)
    if (A == C) {
        Y = x * pow(A - C, 3);
    } else {
        Y = pow(x, 3) - A;
    }

    cout << "Task 1 (Variant 8): Y = " << Y << endl;
    return 0;
}
