#include <stdio.h>
#include "Evklid.h"
#include "calculateE.h"

int main(){
    int ans, a, b, n;
    float ans2;
    while(1){
    
    printf("Введите 2 числа:\n");
    scanf("%d%d", &a, &b);
    if(a == -1){break;}
    ans = gcf(a, b);
    printf("Ответ:\n");
    printf("%d\n", ans);
    printf("~~~~~~~~~~~~~~~\n");
    printf("Введите число:\n");
    scanf("%d", &n);

    ans2 = calculateE(n);
    printf("Ответ: %lf\n", ans2);
    printf("~~~~~~~~~~~~~~~\n");
    }

    return 0;
}

/*first_task: 
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % gcc -o libEvklid.so -shared Evklid.c
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % gcc -o libCalculateE.so -shared calculateE.c
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % gcc main.c -L. -lEvklid -lCalculateE -o main
ivanklimov@MacBook-Air-Ivan-2 os_lab_4 % ./main
 */