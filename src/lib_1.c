#include <stdio.h>
#include <math.h>
#include "lib_1.h"

// Функция для вычисления наибольшего общего делителя (НОД) двух чисел
int gcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

float calculateE(float x){
    float  a;
    a = 1 + 1/x;
    return pow(a, x);
}
