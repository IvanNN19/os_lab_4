#include <stdio.h>
#include <dlfcn.h>

int main(){
    int a, b, n, i, k = 0;

    void *lib_evklid;
    void *lib_E;
    int (*func_evklid)(int x, int y);
    float (*func_E)(int z);

    while(1){
        printf("Выбор контракта(выход: -1): ");
        scanf("%d", &i);//=1
        if(i == -1){break;}
        if(i == 0){ k = (k+1)%2;}

        switch (k)
        {
        case(0): //evklid
        printf("Введите 2 числа:\n");
        scanf("%d%d", &a, &b);
        lib_evklid = dlopen("libEvklid.so", RTLD_LAZY);//RTLD_LAZY, подразумевающим разрешение неопределенных символов в виде кода, содержащегося в исполняемой динамической библиотеке
        if (!lib_evklid){
		    //если ошибка, то вывести ее на экран
		    fprintf(stderr, "dlopen() error: %s\n", dlerror());
		    return 1;
	    }
        func_evklid = dlsym(lib_evklid, "gcf");
        printf("ans_1 = %d\n", (*func_evklid)(a, b));
        dlclose(lib_evklid);
        break;
        
        case(1): //E
        printf("Введите число:\n");
        scanf("%d", &n);
        lib_E = dlopen("libCalculateE.so", RTLD_LAZY);
        if (!lib_E){
            //если ошибка, то вывести ее на экран
            fprintf(stderr, "dlopen() error: %s\n", dlerror());
            return 1;
        }
        func_E = dlsym(lib_E, "calculateE");
        printf("ans_2 = %lf\n", (*func_E)(n));
        dlclose(lib_E);
        break;

        }
    }


    return 0;
}
