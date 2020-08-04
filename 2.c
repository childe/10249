#include <assert.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

const int n =  64 * 1024 * 1024;

void t(int step){
    int *arr = (int*)malloc(sizeof(int) * n);
    assert(arr != NULL);

    printf("test %d\t", step);

    struct timeval tv;
    gettimeofday(&tv,NULL);
    int s = tv.tv_sec;
    int su = tv.tv_usec;

    for (int i = 0; i < n; i+=step) arr[i] *= 3;

    gettimeofday(&tv,NULL);
    int e = tv.tv_sec;
    int eu = tv.tv_usec;
    printf("%.4f\n", (e-s)+(eu-su)/1000000.0);

    free(arr);
}

int main(){
    for (int i = 0; i <= 15; i+=1) t(1 << i);
}
