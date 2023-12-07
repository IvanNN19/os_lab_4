#include <stdio.h>
#include <dlfcn.h>

int main(){
    int a, b, n, num_lib = 1, k = 0;
    float x;
    void *lib; 

    lib = dlopen("libLIB1.so", RTLD_LAZY);
    if (!lib){ //если ошибка, то вывести ее на экран
        fprintf(stderr, "dlopen() error: %s\n", dlerror());
        return 1;
    }

    printf("номер команды(для завершения -1): ");
    scanf("%d", &n);
    while(n != -1){
        switch (n){
            case(0): //smena
                dlclose(lib);
                switch(num_lib){
                    case(1):
                        printf("перешли во 2й контракт\n");
                        num_lib = 2;
                        lib = dlopen("libLIB2.so", RTLD_LAZY);
                        break;
                    case(2):
                        printf("перешли в 1й контракт\n");
                        num_lib = 1;
                        lib = dlopen("libLIB1.so", RTLD_LAZY);
                        break;
                }
                printf("номер команды(для завершения -1): ");
                scanf("%d", &n);
                break;
            case(1):
                printf("GCF:\n");
                scanf("%d%d", &a, &b);
                int (*func_gcf)(int a, int b);
                func_gcf = dlsym(lib, "gcf");
                printf("результат: %d\n", (*func_gcf)(a, b));
                printf("номер команды(для завершения -1): ");
                scanf("%d", &n);
                break;
            case(2):
                printf("E:\n");
                scanf("%f", &x);
                float (*func_E)(float x);
                func_E = dlsym(lib, "calculateE");
                printf("результат: %f\n", (*func_E)(x));
                printf("номер команды(для завершения -1): ");
                scanf("%d", &n);
                break;
            default:
                break;
        }
    }
    dlclose(lib);

    return 0;
}
