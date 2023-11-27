#include <stdio.h>
#include "calculateE.h"

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Функция для вычисления значения числа e с использованием ряда Маклорена
float calculateE(int n) {
    float e = 1.0;

    for (int i = 1; i <= n; ++i) {
        e += 1.0 / factorial(i);
    }

    return e;
}