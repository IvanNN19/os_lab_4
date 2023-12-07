#include <stdio.h>
#include <math.h>
#include "lib_1.h"

int main(){
    int ans, a, b;
    float ans2, n;
    while(1){
    
    printf("Введите 2 числа:\n");
    scanf("%d%d", &a, &b);
    if(a == -1){break;}
    ans = gcf(a, b);
    printf("Ответ:\n");
    printf("%d\n", ans);
    printf("~~~~~~~~~~~~~~~\n");
    printf("Введите число:\n");
    scanf("%f", &n);
    if(n == -1){break;}
    ans2 = calculateE(n);
    printf("Ответ: %lf\n", ans2);
    printf("~~~~~~~~~~~~~~~\n");
    }

    return 0;
}

/*first_task: 
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % gcc -o libEvklid.so -shared Evklid.c
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % gcc -o libCalculateE.so -shared calculateE.c
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % gcc main_1.c -L. -lEvklid -lCalculateE -o main1
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % ./main
 */

// int main(){
//     float  a = 0, x = 100;
//     double ans;
//     a = 1 + 1/x;
//     ans = pow(a, x);
//     printf("%f\n", ans);
//     return 0;
// }