#include <stdio.h>
#include "Evklid.h"

// Функция для вычисления наибольшего общего делителя (НОД) двух чисел
int gcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

















// int main() {
//     int num1, num2;

//     printf("Введите два целых числа: ");
//     scanf("%d %d", &num1, &num2);

//     // Вызов функции для вычисления НОД
//     int gcd = euclideanAlgorithm(num1, num2);

//     printf("Наибольший общий делитель: %d\n", gcd);

//     return 0;
// }
