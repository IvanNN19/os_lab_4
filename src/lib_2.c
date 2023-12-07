#include <stdio.h>
#include "lib_2.h"

int gcf(int A, int B){
    int ans;
    if (A > B){
        ans = B;
    }
    else if (A < B){
        ans = A;
    }
    else{
        return A;
    }
    while (ans != 0){
        if (A % ans == 0 && B % ans == 0){
            return ans;
        }
        --ans;
    }

    return -1;
}

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Функция для вычисления значения числа e с использованием ряда Маклорена
float calculateE(float n) {
    float e = 1.0;

    for (int i = 1; i <= n; ++i) {
        e += 1.0 / factorial(i);
    }

    return e;
}