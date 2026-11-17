// Лабораторна робота №2. Розробка алгоритмів з розгалуженою структурою
// Студент: Костишен Артемій Володимирович | Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;

    // Завдання 1 (Варіант 8)
    {
        double x, A, C, Y;
        cout << "\n--- Task 1 (Variant 8) ---\nEnter x, A, C: ";
        if (!(cin >> x >> A >> C)) {
            x = 2.0; A = 3.0; C = 5.0;
            cout << x << " " << A << " " << C << endl;
        }
        if (A == C) {
            Y = x * pow(A - C, 3);
        } else {
            Y = pow(x, 3) - A;
        }
        cout << "Y = " << Y << endl;
    }

    // Завдання 2 (Варіанти 8 і 13)
    {
        double x, y;
        cout << "\n--- Task 2 (Variants 8 and 13) ---\nEnter x, y: ";
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
    }

    return 0;
}
