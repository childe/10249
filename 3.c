#include <assert.h>
#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>

int step = 32*1024*1024;
struct timeval tv;

void t(int n){
    int *arr = (int*)malloc(sizeof(int) * n);
    assert(arr != NULL);
    printf("test %d\t", n);
    gettimeofday(&tv,NULL);
    int s = tv.tv_sec;
    int su = tv.tv_usec;

    for (int i = 0; i < step; i+=1) {
        arr[(i*16)%n]+=1;
    }

    gettimeofday(&tv,NULL);
    int e = tv.tv_sec;
    int eu = tv.tv_usec;
    printf("%.4f\n", (e-s)+(eu-su)/1000000.0);
    free(arr);
}

int main(){
    for (int i = 0; i <= 20; i+=1) t(1024* (1 << i));
}
