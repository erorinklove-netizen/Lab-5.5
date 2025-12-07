// Lab 5.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Якимів Наталія
// Варіант 7 — рекурсивне перетворення у різні системи числення

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

// глобальна змінна
int maxDepth;

// рекурсивна функція
string toBase(int n, int base, int depth = 1)
{
    if (depth > maxDepth) maxDepth = depth;

    if (n < base)
        return to_string(n);

    return toBase(n / base, base, depth + 1) + to_string(n % base);
}

#ifndef UNIT_TESTING     // <??? ДОДАНО СЮДИ !!!

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n, base;

    cout << "Введіть натуральне число n: ";
    cin >> n;

    cout << "\n===== Переведення у двійкову систему =====\n";
    maxDepth = 0;
    cout << "Результат: " << toBase(n, 2) << endl;
    cout << "Глибина рекурсії: " << maxDepth << "\n\n";

    cout << "===== Переведення у вісімкову систему =====\n";
    maxDepth = 0;
    cout << "Результат: " << toBase(n, 8) << endl;
    cout << "Глибина рекурсії: " << maxDepth << "\n\n";

    cout << "Введіть основу системи N (>1): ";
    cin >> base;

    cout << "===== Переведення у систему з основою " << base << " =====\n";
    maxDepth = 0;
    cout << "Результат: " << toBase(n, base) << endl;
    cout << "Глибина рекурсії: " << maxDepth << endl;

    return 0;
}

#endif  // <??? І СЮДИ !!!
